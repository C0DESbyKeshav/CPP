#include <iostream>
using namespace std;

/*
Alternative for initialization of variables in constructors
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

//* Only constructors take member initializers

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : a(i), b(i+b)  ---->  //* This syntax of initialization section will throw an error because 'a' will be initialized first.
    //* Reason of error: in private section of the class, 'a' is declared before 'b'
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}
