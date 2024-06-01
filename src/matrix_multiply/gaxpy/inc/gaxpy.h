#pragma once

#include "defines.h"

using namespace YYY;

enum CalcType {
    ROW_TYPE = 0,
    COL_TYPE
};

ARRAY GaXpY(MATRIX A, ARRAY x, ARRAY y, CalcType type = ROW_TYPE);