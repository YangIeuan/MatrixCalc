#include "testmatrixutils.h"

#include "defines.h"
using namespace YYY;

#include <iostream>

#include "matrixutils.h"
#include "printutils.h"

void TestTrans()
{
    MATRIX A = {
        { 1, 2, 3 },
        { 4, 5, 6 },
    };

    Trans(A);
    std::cout << "=====TestTrans====" << std::endl;
    PrintMatrix(A);
}