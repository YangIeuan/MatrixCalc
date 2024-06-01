#include "xdoty.h"

double XdotY(ARRAY x, ARRAY y)
{
    int m = x.size();
    int n = y.size();
    double ret = 0;
    if (m != n) {
        return ret;
    }
    for (int i = 0; i < m; ++i) {
        ret += (x[i] * y[i]);
    }
    return ret;
}