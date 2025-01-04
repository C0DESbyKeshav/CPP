#include <iostream>
using namespace std;

class Base
{
    int data1; // private by default and is not inheritable

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : public Base // Class is being derived publically
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getData1(); // Since data1 is the private member of the base class by default and hence not inheritable
                                // If we want to access data1 in the derived class then it is only possible by inheriting it through a function which should be in public section of base class i.e. data1 (private member of base class) can be accessed through getData1() function (public member of base class)
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}
