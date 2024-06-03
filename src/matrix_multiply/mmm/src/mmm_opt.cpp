#include "mmm_opt.h"

#include "xdoty.h"
#include "matrixutils.h"

MATRIX MmultMOpt(MATRIX A, MATRIX B, MATRIX C)
{
    int row_A = A.size();
    int row_B = B.size();
    int col_B = B[0].size();
    Trans(B);
    for (int i = 0; i < row_A; ++i) {
        for (int j = 0; j < row_B; ++j) {
            for (int k = 0; k < col_B; ++k) {
                C[i][j] += A[i][k] * B[j][k];
            }
        }
    }
    return C;
}

MATRIX MmultMDotOpt(MATRIX A, MATRIX B, MATRIX C)
{
    int row_A = A.size();
    int row_B = B.size();
    int col_B = B[0].size();
    Trans(B);
    for (int i = 0; i < row_A; ++i) {
        for (int j = 0; j < row_B; ++j) {
            C[i][j] += XdotY(A[i], B[j]);
        }
    }
    return C;
}
