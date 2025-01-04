#include <iostream>
using namespace std;

class Shape // Base class
{
public:
    int r;
    float pi = 3.14;

    Shape() {} // A Default constructor is must before any parameterized constructor.

    Shape(int radius)
    {
        r = radius;
    }
};

/*Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note:
1. Default visibility mode is private.
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class.
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class.
4. Private members of base class can never be inherited.
*/

class Circle : public Shape // Derived class
{
public:
    float area;

    Circle() {} // A Default constructor is must before any parameterized constructor.

    Circle(int radius)
    {
        r = radius;
    }

    void Area()
    {
        area = 3.14 * r * r;
        cout << area;
    }
};

int main()
{
    Shape s1(2), s2(3);
    cout << "Value of pi = " << s1.pi << endl;
    cout << "Value of pi = " << s2.pi << endl
         << endl;

    Circle c(4);
    cout << "Value of pi = " << c.pi << endl;
    cout << "Value of radius = " << c.r << endl;
    cout << "Area of Circle = ";
    c.Area();

    return 0;
}