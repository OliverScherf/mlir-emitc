//===- Passes.td - EmitC pass definition file --------------*- tablegen -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_DIALECT_EMITC_PASSES
#define MLIR_DIALECT_EMITC_PASSES

include "mlir/Pass/PassBase.td"

def ConvertMHLOToEmitCPass : Pass<"convert-mhlo-to-emitc", "FuncOp"> {
  let summary = "Convert from MHLO dialect to EmitC dialect.";
  let constructor = "createConvertMhloToEmitcPass()";
}

// TODO: This could be moved to separate file, but this will be moved to mlir-hlo and removed here.
def ConvertToScfPass : Pass<"convert-mhlo-while-to-scf", "FuncOp"> {
  let summary = "Converting MHLO While to SCF.";
  let constructor = "mhlo::createConvertToScfPass()";
}

#endif // MLIR_DIALECT_EMITC_PASSES