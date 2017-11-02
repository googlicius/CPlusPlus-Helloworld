#include "MyClass.h"
#include <iostream>

using namespace std;

MyClass::MyClass()
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
    cout << "Hello" << endl;
}
