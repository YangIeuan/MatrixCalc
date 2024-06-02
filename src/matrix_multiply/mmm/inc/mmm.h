#pragma once

#include "defines.h"

using namespace YYY;

MATRIX MmultM(MATRIX A, MATRIX B, MATRIX C);

MATRIX MmultMDot(MATRIX A, MATRIX B, MATRIX C);

MATRIX MmultMSaxpy(MATRIX A, MATRIX B, MATRIX C);

MATRIX MmultMGer1(MATRIX A, MATRIX B, MATRIX C);
