#include "testxdoty.h"

#include <iostream>

#include "defines.h"
#include "xdoty.h"

using namespace YYY;

void TestXdotYCase1()
{
    ARRAY x = { 1, 2, 3 };
    ARRAY y = { 3, 2, 1 };
    double z = XdotY(x, y);
    std::cout << "=====TestXdotYCase1====" << std::endl;
    std::cout << " x .* y = " << z << std::endl;
}