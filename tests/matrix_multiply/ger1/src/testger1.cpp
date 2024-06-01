#include "ger1.h"
#include <iostream>
#include "testger1.h"

#include "defines.h"

using namespace YYY;

void TestGer1Case()
{
    MATRIX A = {
        { 1, 0, 0 },
        { 0, 1, 0 },
        { 0, 0, 1 }
    };

    ARRAY x = { 1, -1, 1 };
    ARRAY y = { 0, 1, 0 };

    MATRIX B = Ger1(A, x, y);
    std::cout << "=====TestGer1Case====" << std::endl;
    for (auto &row : B) {
        for (auto &ai : row) {
            std::cout << ai << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}