/*
    优化的矩阵乘法
*/

#pragma once

#include "defines.h"

using namespace YYY;

#include "arrayutils.h"
#include "matrixutils.h"

MATRIX MmultMOpt(MATRIX A, MATRIX B, MATRIX C);

MATRIX MmultMDotOpt(MATRIX A, MATRIX B, MATRIX C);