#include <iostream>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    void setData(int v1, int v2) // Now, the question might arise in your mind that why not simply declare the variables in public section instead of creating a function and doing this. The answer is because doing that is not considered a good practice in coding.
    {
        real = v1;
        img = v2;
    }

    void setDataBySum(Complex o1, Complex o2) // This is a function but it passes objects as its arguments and this is the speciality and purpose of this program.
    {
        real = o1.real + o2.real; // real number of result = real number of o1 + real number of o2
        img = o1.img + o2.img;    // imaginary number of result = imaginary number of o1 + imaginary number of o2
    }

    void printNumber()
    {
        cout << "Your complex number is " << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}
