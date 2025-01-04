#include <iostream>
using namespace std;
class A
{
    int a; // local variable

public:
    // void setData(int a)
    // {
    //     a = a;   // class variable = local variable
    //*  This throws an error beacuse between local variable and class variable, the priority is given to the local variable and hence it will give a garbage value.
    // }

    void setData1(int a) // class variable
    {
        this->a = a; // 'this' is a keyword which is a pointer which points to the object which invokes the member function.
    }

    A &setData2(int a) // class variable
    {
        this->a = a;  // 'this' is a keyword which is a pointer which points to the object which invokes the member function.
        return *this; // Jo object setData2() ko call kar raha hai, 'this' pointer uss object ko point kar raha hai. i.e 'this' pointer is pointing to object 'a'
                      // Matlab yeh ki getData2() function ek inbuilt 'this' pointer ko return kar raha hai jo point karega uss object ko jo getData2() function ko call kar raha hai.
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;

    a.setData1(4);
    a.getData();

    a.setData2(4).getData(); // No need to call getData() explicitly when 'this' operator is used as return type
    return 0;
}
