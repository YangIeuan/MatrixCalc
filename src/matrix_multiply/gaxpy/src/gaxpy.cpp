#include "gaxpy.h"
#include "xdoty.h"


ARRAY GaXpY(MATRIX A, ARRAY x, ARRAY y, CalcType type)
{
    ARRAY z;
    if (type == ROW_TYPE) {
        int row_A = A.size();
        int col_A = A[0].size();
        int len_x = x.size();
        int len_y = y.size();
        if ((len_x != col_A) || (len_y != row_A)) {
            return z;
        }
        for (int i = 0; i < row_A; ++i) {
            z.push_back(XdotY(A[i], x) + y[i]);
        }
    } else if (type == COL_TYPE) {
        // C++不支持列型(因为C++是以行存储矩阵元素)
    }
    return z;
}
