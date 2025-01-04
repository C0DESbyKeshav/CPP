#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //**************** Constants in C++ ***************
    const int x = 3;
    cout<<"The value of x is: "<<x<<endl<<endl;
    //x = 45; // You will get an error because 'x' is a constant so you can't change it's value

    //**************** Manipulators in C++ ***************
    int a =3, b=78, c=1233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;   //By default, setw is right aligned
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl<<endl;

    // Operator Precedence and its Associativity
    int l = 3, m = 4;
    int n = ((((l * 5) + m) - 45) + 87);
    cout << n;

    return 0;
}