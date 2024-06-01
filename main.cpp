#include "defines.h"

#include "testgaxpy.h"
#include "testmmm.h"
#include "testsaxpy.h"
#include "testxdoty.h"

int main() {
    TestGaXpYCase1();
    TestMMMCase1();
    TestMMMCase2();
    TestSaXpYCase1();
    TestXdotYCase1();
    return 0;
}