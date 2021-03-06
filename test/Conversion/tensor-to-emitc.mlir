// RUN: emitc-opt -convert-tensor-to-emitc %s | emitc-translate --mlir-to-cpp | FileCheck %s

// CHECK: void std_extract_element(Tensor0D<int32_t> v1, Tensor1D<int32_t, 2> v2)
func @std_extract_element(%arg0: tensor<i32>, %arg1: tensor<2xi32>) -> () {
  %0 = constant 0 : index
  %1 = constant 1 : index
  // CHECK: standard::extract_element(v1)
  %2 = tensor.extract %arg0[] : tensor<i32>
  // CHECK: standard::extract_element(v2, v3)
  %3 = tensor.extract %arg1[%0] : tensor<2xi32>
  // CHECK: standard::extract_element(v2, v4)
  %4 = tensor.extract %arg1[%1] : tensor<2xi32>
  return 
}
