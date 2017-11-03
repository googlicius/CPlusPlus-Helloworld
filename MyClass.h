#ifndef MYCLASS_H
#define MYCLASS_H


class MyClass
{
    public:
        MyClass(int x);
        virtual ~MyClass();
        void myPrint();
        MyClass operator+(MyClass obj);

    protected:

    private:
        int num;
};

#endif // MYCLASS_H
