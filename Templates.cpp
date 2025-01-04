#include <iostream>
using namespace std;

/*
What is a template in C++ programming?
--> A template is believed to escalate the potential of C++ several fold by giving it the ability to define data types as parameters making it useful to reduce repetitions of the same declaration of classes for different data types. Declaring classes for every other data type(which if counted is way too much) in the very first place violates the DRY( Don’t Repeat Yourself) rule of programming and on the other doesn't completely utilise the potential of C++.
    It is very analogous to when we said classes are the templates for objects, here templates itself are the templates of the classes. That is, what classes are for objects, templates are for classes.
*/

/*
Why templates?
--> 1. DRY Rule:
        To understand the reason behind using templates, we will have to understand the effort behind declaring classes for different data types.
        Suppose we want to have a vector for each of the three(can be more) data types, int, float and char.
        Then we’ll obviously  write the whole thing again and again making it awfully difficult.
        This is where the saviour comes, the templates.
        It helps parametrizing the data type and declaring it once in the source code suffice.
        Very similar to what we do in functions. 
        It is because of this, also called, ‘parameterized classes’.
    2. Generic Programming:
        It is called generic, because it is sufficient to declare a template once, it becomes general and it works all along for all the data types.
*/

//*Syntax: (an example)

#include <iostream>
using namespace std;

template <class t> // Name of the template can be anything, here it's 't'.
                   // By using this now we can transfer data type as a variable and define it at the end
class Complex
{
public:
    t a;
    t b;

    Complex(t a, t b)
    {
        this->a = a;
        this->b = b;
    }

    void displayData()
    {
        cout << "The Real part is " << a << " and the Imaginary part is " << b << endl;
    }
};

int main()
{
    Complex<int> z(4, 7);
    Complex<float> z1(6.77, 2.89);

    z.displayData();
    z1.displayData();

    return 0;
}