#include "testsaxpy.h"

#include "defines.h"
#include "saxpy.h"

#include <iostream>

using namespace YYY;

void TestSaXpYCase1()
{
    float a = 2;
    ARRAY x = { 1, 2, 3 };
    ARRAY y = { 1, 1, 1 };
    ARRAY z = SaXpY(a, x, y);
    std::cout << "=====TestSaXpYCase1====" << std::endl;
    for (auto &zi : z) {
        std::cout << zi << " ";
    }
    std::cout << std::endl;
}