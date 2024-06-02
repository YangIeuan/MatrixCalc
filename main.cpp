#include "defines.h"

#include "testgaxpy.h"
#include "testger1.h"
#include "testmmm.h"
#include "testsaxpy.h"
#include "testxdoty.h"

int main() {
    TestGaXpYCase1();
    TestGer1Case();
    TestMMMCase1();
    TestMMMCase2();
    TestMMMCase3();
    TestMMMCase4();
    TestSaXpYCase1();
    TestXdotYCase1();
    return 0;
}