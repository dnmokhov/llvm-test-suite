//==--------------- pm_access_1.cpp - DPC++ ESIMD on-device test ----------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// REQUIRES: gpu
// Sporadic failure in GPU RT 21.16.19610
// UNSUPPORTED: cuda || (level_zero && linux)
// RUN: %clangxx -fsycl -I%S/.. %S/Inputs/pm_common.cpp -o %t.out
// RUN: %GPU_RUN_PLACEHOLDER %t.out 1
