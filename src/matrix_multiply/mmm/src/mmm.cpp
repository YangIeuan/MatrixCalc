#include "mmm.h"

#include <iostream>

#include "arrayutils.h"
#include "matrixutils.h"
#include "printutils.h"
#include "xdoty.h"
#include "saxpy.h"
#include "ger1.h"

MATRIX MmultM(MATRIX A, MATRIX B, MATRIX C)
{
    // 矩阵乘法的标量形式
    int m = A.size();
    int n = A[0].size();
    int p = B[0].size();
    MATRIX retMatrix;
    ARRAY temparay;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            double sum = C[i][j];
            for (int k = 0; k < n; k++) {
                sum += A[i][k] * B[k][j];
            }
            temparay.push_back(sum);
        }
        retMatrix.push_back(temparay);
        temparay.erase(temparay.begin(), temparay.end());
    }
    return retMatrix;
}

MATRIX MmultMDot(MATRIX A, MATRIX B, MATRIX C)
{
    // 矩阵乘法的点积形式（ijk、jik形式）
    int row_A = A.size();
    int row_B = B.size();
    int col_B = B[0].size();
    MATRIX ret;
    ARRAY tmpArray;
    for (int i = 0; i < row_A; ++i) {
        for (int j = 0; j < col_B; ++j) {
            tmpArray.push_back(XdotY(A[i], GetMatrixCol(B, j)) + C[i][j]);
        }
        ret.push_back(tmpArray);
        tmpArray.erase(tmpArray.begin(), tmpArray.end());
    }
    return ret;
}

MATRIX MmultMSaxpy(MATRIX A, MATRIX B, MATRIX C)
{
    // 矩阵乘法的SAXPY形式（ikj，jki形式）
    int row_A = A.size();
    int row_B = B.size();
    int col_B = B[0].size();
    MATRIX ret;
    ARRAY tmpArray;
    for (int j = 0; j < col_B; ++j) {
        tmpArray = GetMatrixCol(C, j);
        for (int k = 0; k < row_B; ++k) {
            tmpArray = SaXpY(B[k][j], GetMatrixCol(A, k), tmpArray);
        }
        ret.push_back(tmpArray);
    }

    Trans(ret);
    return ret;
}

MATRIX MmultMGer1(MATRIX A, MATRIX B, MATRIX C)
{
    // 矩阵乘法的秩1修正形式（kij, kji形式）
    int row_A = A.size();
    int row_B = B.size();
    int col_B = B[0].size();
    for (int k = 0; k < row_B; ++k) {
        C = Ger1(C, GetMatrixCol(A, k), B[k]);
    }
    return C;
}