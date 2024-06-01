#include "matrixutils.h"

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