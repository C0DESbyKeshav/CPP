#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Base and Derived class variables var_base " << var_base << " and var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer obect to derived class object
                                       // This pointer will only be able to call the data members of the base class because it is the base class pointer even if it points to the object of derived class.
                                       // This pointer will NOT be able to call any of the data members of the derived class because it is a base class pointer

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    // This program is also an example of Late Binding (Run Time Polymorphism).
    // Late Binding DOESN'T mean that the compiler decides the function to be called at run time.
    // It rather means ki compiler jo hai woh "function ke address se object ko associate" karta hai during "run- time" and NOT during compile time.

    return 0;
}
