#include <iostream>
using namespace std;
int main()
{
    int *n; // '*' is used for pointing towards any variable.
    int m = 25;
    n = &m;               // '&' is used to show the address of any variable
    cout << n << "\n";    // and '&' is called AMPERSAND.
    cout << *n << "\n";   // if we use '*' then it shows the value stored at that address of the variable to which its pointing to.
    cout << &m << "\n\n"; // and when we use '&' then it only shows the address of variable.

    //****************************** ANOTHER EXAMPLE ****************************
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 3;
    int *b;
    b = &a;

    // '&' ---> (Address of) Operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // '*' ---> (value at) Dereference operator
    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}