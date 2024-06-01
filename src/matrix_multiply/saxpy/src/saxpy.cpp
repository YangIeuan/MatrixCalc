#include "saxpy.h"

ARRAY SaXpY(float a, ARRAY x, ARRAY y)
{
    ARRAY ret;
    int m = x.size();
    int n = y.size();
    if (m != n) {
        return ret;
    }
    for (int i = 0; i < m; ++i) {
        ret.push_back(a * x[i] + y[i]);
    }
    return ret;
}