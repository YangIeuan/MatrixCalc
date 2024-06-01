#include "testgaxpy.h"

#include <iostream>
#include "gaxpy.h"
#include "defines.h"

using namespace YYY;

void TestGaXpYCase1()
{
    MATRIX A = {
        { 1, 0, 0 },
        { 0, -1, 0 },
        { 0, 0, 1},
    };
    ARRAY x = { 1, 2, 3 };
    ARRAY y = { -1, 2, -3 };
    ARRAY z = GaXpY(A, x, y);
    std::cout << "=====TestGaXpYCase1====" << std::endl;
    for (auto &zi : z) {
        std::cout << zi << " ";
    }
    std::cout << std::endl;
}