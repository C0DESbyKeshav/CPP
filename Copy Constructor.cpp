#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() // A default Constructor is must. (Reason--> A Default Constructor is mandatory to be created so that if there is no input for the compiler then it may get confused so there should always be a default Constructor to avoid that possibility of compiler to throw an error)
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    // When no Copy Constructor is found, compiler supplies its own default Copy Constructor.
    Number(Number &obj) // This is the Copy Constructor.
    {
        cout << "Copy Constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy Constructor invoked
    z1.display(); // z1 should exactly resemble z or x or y

    z2 = z; // Copy Constructor not called
    z2.display();

    Number z3 = z; // Copy Constructor invoked
    z3.display();

    return 0;
}