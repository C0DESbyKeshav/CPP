#include <iostream>
using namespace std;

class A
{
public:
    void say()
    {
        cout << "Hello World" << endl;
    }
};

class B : public A
{
public:
    void say()
    {
        cout << "One Piece is Real" << endl;
    }
};

/*
 Here the Ambiguity (problem / confusion) is:
 Now when both the classes are in inheritance which means they both can share all the functions with each other.
 So when we call the say() function through derived class then it has two say() functions to consider.
 Which one will be called ?
 The answer is:
 //*    B's new say() method will override base class's say() method
*/

int main()
{
    A a;
    a.say();

    B b;
    b.say();

    return 0;
}
