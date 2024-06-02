#include "mmm.h"

#include "arrayutils.h"
#include "matrixutils.h"
#include "xdoty.h"
#include "saxpy.h"

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
            double sum = 0;
            for (int k = 0; k < n; k++) {
                sum += A[i][k] * B[k][j] + C[i][j];
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
    // 矩阵乘法的点积形式
    int row_A = A.size();
    int row_B = B.size();
    int col_B = B[0].size();
    MATRIX ret;
    ARRAY tmpArray;
    for (int i = 0; i < row_A; ++i) {
        for (int j = 0; j < col_B; ++j) {
            // 由于C++对于元素的存储方式为行存储，这种取某列的方式会浪费CPU时间
            tmpArray.push_back(XdotY(A[i], GetMatrixCol(B, j)) + C[i][j]);
        }
        ret.push_back(tmpArray);
        tmpArray.erase(tmpArray.begin(), tmpArray.end());
    }
    return ret;
}

MATRIX MmultMSaxpy(MATRIX A, MATRIX B, MATRIX C)
{
    // 矩阵乘法的SAXPY
    int row_A = A.size();
    int row_B = B.size();
    int col_B = B[0].size();
    MATRIX ret;
    ARRAY tmpArray = GetZeroArray(row_B);
    for (int j = 0; j < col_B; ++j) {
        for (int k = 0; k < row_B; ++k) {
            AddArray(SaXpY(B[k][j], GetMatrixCol(A, k), GetMatrixCol(C, j)), tmpArray);
        }
        ret.push_back(tmpArray);
        SetArrayToZero(tmpArray);
    }

    ret = Trans(ret);
    return ret;
}