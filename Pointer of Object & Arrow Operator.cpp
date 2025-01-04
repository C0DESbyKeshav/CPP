#include <iostream>
using namespace std;

class Complex
{
    float real, imaginary;

public:
    Complex() {}
    Complex(float a, float b) : real(a), imaginary(b) {} // Syntax of initialization list.

    void print()
    {
        cout << "The Complex number is " << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{

    // Complex c(3, 7);    // Alternative
    // Complex *ptr = &c;  // Alternative (Pointer Objects)
    Complex *ptr = new Complex(3, 7); // Alternative

    // c.print();   // Alternative
    // (*ptr).print();  // parenthesis is mandatory because the precedence of dot(.) operator is higher than the star(*) operator therefore it without paranthesis, it will throw an error.
    ptr->print(); // Alternative (Arrow Operator)

    return 0;
}