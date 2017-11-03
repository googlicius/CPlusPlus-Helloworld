#include <iostream>
#include "add.h"
#include "MyClass.h"
#define PRINT_JOE

using namespace std;

int main()
{
    MyClass class1(4);
    MyClass class2(5);
    MyClass res = class1 + class2;
    res.myPrint();
    class1.myPrint();
    class2.myPrint();
    return 0;
}
