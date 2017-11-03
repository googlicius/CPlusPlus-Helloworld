#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass(int x): num(x)
{
    //ctor
    cout << "Constructor" <<endl;
}

MyClass::~MyClass()
{
    //dtor
    cout<< "Destructor" <<endl;
}

void MyClass::myPrint() {
    cout << "Num is: "
        << num << endl;
}

MyClass MyClass::operator+(MyClass obj) {
    MyClass obj2(0);
    obj2.num = this->num + obj.num;
    return obj2;
}
