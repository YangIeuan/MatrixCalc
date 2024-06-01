#include "mmm.h"

MATRIX MmultM(MATRIX m1, MATRIX m2)
{
    //两矩阵相乘
    int m = m1.size();
    int n = m1[0].size();
    int p = m2[0].size();
    MATRIX retMatrix;
    ARRAY temparay;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            double sum = 0;
            for (int k = 0; k < n; k++) {
                sum += m1[i][k] * m2[k][j];
            }
            temparay.push_back(sum);
        }
        retMatrix.push_back(temparay);
        temparay.erase(temparay.begin(), temparay.end());
    }
    return retMatrix;
}