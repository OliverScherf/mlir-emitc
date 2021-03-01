// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This file defines functions emitted by TosaToEmitC

#ifndef EMITC_EMITC_TOSA_H
#define EMITC_EMITC_TOSA_H

#include "emitc_core_ops.h"

namespace tosa {

/// Unary elementwise ops
// AbsOp
template <typename Src>
inline Src abs(Src x) {
  return emitc::abs<Src>(x);
}

// ExpOp
template <typename Src>
inline Src exp(Src x) {
  return emitc::exp<Src>(x);
}

// ReciprocalOp
template <typename Src>
inline Src reciprocal(Src x) {
  using ET_Src = typename get_element_type<Src>::type;

  auto f = [](ET_Src element) { return (static_cast<ET_Src>(1.0) / element); };

  return unary<Src>(x, f);
}

/// Binary elementwise ops
// AddOp
template <typename Src>
inline Src add(Src x, Src y) {
  return emitc::add<Src>(x, y);
}

// MulOp
template <typename Src>
inline Src mul(Src x, Src y, Tensor0D<int32_t> shift) {
  assert(shift[0] == 0); // shift has to be 0 if datatype is not int32_t
  return emitc::mul(x, y);
}

template <>
inline Tensor0D<int32_t> mul(Tensor0D<int32_t> x, Tensor0D<int32_t> y,
                             Tensor0D<int32_t> shift) {
  // Taken from
  // https://git.mlplatform.org/tosa/reference_model.git/tree/reference_model/src/ops/ewise_binary.cc?id=df8626976df6c779bb30df9c5ceef689462109c0#n436
  int32_t a = x[0];
  int32_t b = y[0];
  int32_t shift_ = shift[0];

  int64_t result;
  if (shift_ > 0) {
    int64_t round = 1L << (shift_ - 1);
    result = a * b + round;
    result = result >> shift_;
    return {static_cast<int32_t>(result)};
  } else {
    return emitc::mul(x, y);
  }
}

/// Other ops
// FullyConnectedOp
template <typename Dest, typename Src, typename Weights, typename Bias>
Dest fully_connected(Src input, Weights weights, Bias bias) {
  static_assert(is_tensor_of_dim<2, Src>::value,
                "Expected 2 dimensional input");
  static_assert(is_tensor_of_dim<2, Dest>::value,
                "Expected 2 dimensional output");
  static_assert(is_tensor_of_dim<2, Weights>::value,
                "Expected 2 dimensional weights");
  static_assert(is_tensor_of_dim<1, Bias>::value,
                "Expected 1 dimensional bias");

  Dest output;
  static_assert(input.dim(0) == output.dim(0),
                "Output and input batch dimension does not match.");
  static_assert(input.dim(1) == weights.dim(1),
                "Input and weights dimensions does not match.");
  static_assert(output.dim(1) == weights.dim(0),
                "Output and weights dimensions does not match.");
  static_assert(weights.dim(0) == bias.dim(0),
                "Bias and weights dimensions does not match.");

  const size_t N = input.dim(0);
  const size_t C_IN = input.dim(1);
  const size_t C_OUT = weights.dim(0);

  for (size_t n = 0; n < N; ++n) {
    for (size_t c_out = 0; c_out < C_OUT; ++c_out) {
      for (size_t c_in = 0; c_in < C_IN; ++c_in) {
        auto in = input(n, c_in);
        auto weight = weights(c_out, c_in);
        output(n, c_out) += in * weight;
      }
      output(n, c_out) += bias(c_out);
    }
  }
  return output;
}

} // namespace tosa

#endif // EMITC_EMITC_TOSA_H
