#include "testmmm.h"

#include <iostream>
#include "defines.h"
#include "mmm.h"
#include "mmm_opt.h"
#include "printutils.h"

using namespace YYY;

void TestMMMCase1()
{
    MATRIX mat1 = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 8}
    };

    MATRIX mat2 = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    MATRIX mat3 = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 1}
    };
    MATRIX w = MmultM(mat1, mat2, mat3);
    std::cout << "=====TestMMMCase1====" << std::endl;
    for (int i = 0; i < w.size(); i++)
    {
        for (int j = 0; j < w[0].size(); j++)
        {
            std::cout << w[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void TestMMMCase2()
{
    MATRIX mat1 = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 8}
    };

    MATRIX mat2 = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    MATRIX mat3 = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 1}
    };
    MATRIX w = MmultMDot(mat1, mat2, mat3);
    std::cout << "=====TestMMMCase2====" << std::endl;
    for (int i = 0; i < w.size(); i++)
    {
        for (int j = 0; j < w[0].size(); j++)
        {
            std::cout << w[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void TestMMMCase3()
{
    MATRIX mat1 = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 8}
    };

    MATRIX mat2 = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    MATRIX mat3 = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 1}
    };
    MATRIX w = MmultMSaxpy(mat1, mat2, mat3);
    std::cout << "=====TestMMMCase3====" << std::endl;
    for (int i = 0; i < w.size(); i++)
    {
        for (int j = 0; j < w[0].size(); j++)
        {
            std::cout << w[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void TestMMMCase4()
{
    MATRIX mat1 = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 8}
    };

    MATRIX mat2 = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    MATRIX mat3 = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 1}
    };
    MATRIX w = MmultMGer1(mat1, mat2, mat3);
    std::cout << "=====TestMMMCase4====" << std::endl;
    for (int i = 0; i < w.size(); i++)
    {
        for (int j = 0; j < w[0].size(); j++)
        {
            std::cout << w[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void TestMMMOptCase1()
{
    MATRIX mat1 = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 8}
    };

    MATRIX mat2 = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    MATRIX mat3 = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 1}
    };
    MATRIX w = MmultMOpt(mat1, mat2, mat3);
    std::cout << "=====TestMMMOptCase1====" << std::endl;
    PrintMatrix(w);
}

void TestMMMOptCase2()
{
    MATRIX mat1 = {
        {1, 2, 3},
        {4, 15, 6},
        {7, 8, 8}
    };

    MATRIX mat2 = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    MATRIX mat3 = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 1}
    };
    MATRIX w = MmultMDotOpt(mat1, mat2, mat3);
    std::cout << "=====TestMMMOptCase2====" << std::endl;
    PrintMatrix(w);
}