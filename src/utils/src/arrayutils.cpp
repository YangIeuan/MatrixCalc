#include "arrayutils.h"

ARRAY GetMatrixCol(MATRIX A, int index)
{
    ARRAY ret;
    int row_A = A.size();
    int col_A = A[0].size();
    if (index >= col_A) {
        return ret;
    }
    for (int i = 0; i < row_A; ++i) {
        ret.push_back(A[i][index]);
    }
    return ret;
}

ARRAY GetZeroArray(int n)
{
    ARRAY ret;
    for (int i = 0; i < n; ++i) {
        ret.push_back(0);
    }
    return ret;
}

void AddArray(ARRAY x, ARRAY &y)
{
    int len_y = y.size();
    for (int i = 0; i < len_y; ++i) {
        y.at(i) += x[i];
    }
}

void SetArrayToZero(ARRAY &x)
{
    int len_x = x.size();
    for (int i = 0; i < len_x; ++i) {
        x.at(i) = 0;
    }
}
