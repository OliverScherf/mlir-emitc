//===- TensorToEmitC.cpp - Tensor to EmitC conversion -----------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file implements logic for converting tensor to the EmitC dialect.
//
//===----------------------------------------------------------------------===//

#include "PassDetail.h"
#include "emitc/Dialect/EmitC/EmitCDialect.h"
#include "emitc/Dialect/EmitC/Passes.h"
#include "mlir/Dialect/Tensor/IR/Tensor.h"
#include "mlir/IR/BuiltinOps.h"
#include "mlir/IR/PatternMatch.h"
#include "mlir/Pass/Pass.h"
#include "mlir/Transforms/DialectConversion.h"

namespace mlir {
namespace emitc {

namespace {
class ExtractOpConversion
    : public OpConversionPattern<mlir::tensor::ExtractOp> {
  using OpConversionPattern<mlir::tensor::ExtractOp>::OpConversionPattern;

public:
  ExtractOpConversion(MLIRContext *ctx)
      : OpConversionPattern<mlir::tensor::ExtractOp>(ctx) {}

private:
  LogicalResult
  matchAndRewrite(mlir::tensor::ExtractOp indexCastOp, ArrayRef<Value> operands,
                  ConversionPatternRewriter &rewriter) const override {
    StringAttr callee = rewriter.getStringAttr("standard::extract_element");

    Type elementType = indexCastOp.getType();
    if (auto tensorType = elementType.dyn_cast<TensorType>()) {
      elementType = tensorType.getElementType();
    }

    ArrayAttr args;
    ArrayAttr templateArgs;

    rewriter.replaceOpWithNewOp<emitc::CallOp>(indexCastOp,
                                               indexCastOp.getType(), callee,
                                               args, templateArgs, operands);

    return success();
  }
};
} // namespace

void populateTensorToEmitcPatterns(MLIRContext *ctx,
                                   OwningRewritePatternList &patterns) {
  patterns.insert<ExtractOpConversion>(ctx);
}

namespace {

struct ConvertTensorToEmitCPass
    : public ConvertTensorToEmitCBase<ConvertTensorToEmitCPass> {
  /// Perform the lowering to EmitC dialect.
  void runOnFunction() override {

    ConversionTarget target(getContext());

    target.addLegalDialect<emitc::EmitCDialect>();
    target.addIllegalOp<mlir::tensor::ExtractOp>();

    OwningRewritePatternList patterns;
    populateTensorToEmitcPatterns(&getContext(), patterns);

    if (failed(
            applyPartialConversion(getFunction(), target, std::move(patterns))))
      signalPassFailure();
  }
};

} // namespace

std::unique_ptr<FunctionPass> createConvertTensorToEmitCPass() {
  return std::make_unique<ConvertTensorToEmitCPass>();
}

} // namespace emitc
} // namespace mlir
