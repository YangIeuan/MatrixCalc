#include "ger1.h"

#include "saxpy.h"

MATRIX Ger1(MATRIX A, ARRAY x, ARRAY y)
{
    MATRIX ret;
    int row_A = A.size();
    for (int i = 0; i < row_A; i++) {
        ret.push_back(SaXpY(x[i], y, A[i]));
    }

    return ret;
}