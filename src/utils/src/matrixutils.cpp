#include "matrixutils.h"

#include "printutils.h"

MATRIX Trans(MATRIX A)
{
    int row_A = A.size();
    int col_A = A[0].size();
    MATRIX ret;
    ARRAY row_array;
    for (int j = 0; j < col_A; ++j) {
        for (int i = 0; i < row_A; ++i) {
            row_array.push_back(A[i][j]);
        }
        ret.push_back(row_array);
        row_array.erase(row_array.begin(), row_array.end());
    }
    return ret;
}

void Trans(MATRIX &A)
{
    int row_A = A.size();
    int col_A = A[0].size();
    int row_current = row_A - 1; // 当前行向量的个数
    float tmp = 0;
    if (row_A <= col_A) {
        for (int i = 0; i < row_A; ++i) {
            for (int j = i + 1; j < row_A; ++j) {
                tmp = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = tmp;
            }
            for (int j = row_A; j < col_A; ++j) {
                if (j > row_current) {
                    A.push_back(ARRAY());
                    row_current += 1;
                    
                }
                A[j].push_back(A[i][j]);
            }
            A[i].erase(A[i].begin() + row_A, A[i].end());
        }
    }
}