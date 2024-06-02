#include "printutils.h"
#include <iostream>

void PrintElem(double e)
{
    std::cout << e << " " << std::endl;
}

void PrintMatrix(MATRIX A)
{
    int row_A = A.size();
    int col_A = A[0].size();
    for (int i = 0; i < row_A; ++i) {
        for (int j = 0; j < col_A; ++j) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void PrintArray(ARRAY x)
{
    int len_x = x.size();
    for (int i = 0; i < len_x; ++i) {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;
}