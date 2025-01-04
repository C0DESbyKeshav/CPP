#include <iostream>
using namespace std;

class Y; // Predeclaration of class 'Y'. If this is not done, it will throw an error.

class X
{
    int data1;

public:
    void setValue(int value)
    {
        data1 = value;
    }
    friend void add(X, Y);
};

class Y
{
    int data2;

public:
    void setValue(int value)
    {
        data2 = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and Y objects gives me " << o1.data1 + o2.data2;
}

int main()
{
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);

    return 0;
}