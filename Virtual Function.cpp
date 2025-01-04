/*
Rules for virtual functions:
    1. They cannot be static.
    2. They are accessed by object pointers.
    3. Virtual functions can be a friend of another class.
    4. A virtual function in the base class might not be used.
    5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class.
*/

#include <iostream>
using namespace std;

class Country // Base class
{
public:
    virtual void display() // Creating this virtual function allows us to call the function of the same name of derived class or the base class based on our needs
                           // This is virtual function
                           // If we want that the pointer object of base class should also be capable to call the derived class function display() then the virtual function should be made in the base class
    {
        cout << "Name of the Country is INDIA" << endl;
    }
};

class State : public Country // Derived class
                             //* Virtual function is ineffective without inheritance
{
public:
    void display()
    {
        cout << "Name of the State is MAHARASHTRA" << endl;
    }
};

int main()
{
    Country c1;
    State s1;

    Country *c;   // This is a pointer object which is now pointing towards the class "Country"
    c = &c1;      // Object *c now pointes to c1
    c->display(); // This is how we call a function by using pointer object

    c = &s1;
    c->display();

    // We can call both of the display() functions by using the base class pointer.
    // This is because of the virtual function created in the base class which makes this possible.
    //* However, we cannot call the function of base class by using the pointer of derived class.

    State *s;
    // s = &c1;          //* THIS WILL THROW AN ERROR BECAUSE WE CANNOT POINT THE DERIVED CLASS POINTER TO THE BASE CLASS OBJECT.
    // s->display();

    s = &s1;
    s->display();

    // Since here, everything is going to be decided during run time, it is also called as "Run time Polymorphism" or "LATE BINDING"
    // Late Binding DOESN'T mean that the compiler decides the function to be called at run time.
    // It rather means ki compiler jo hai woh "function ke address se object ko associate" karta hai during "run- time" and NOT during compile time.

    //* Before using virtual keyword:
    // Pointer Object will only be able to call the data members of the base class because it is the base class pointer even if it points to the object of derived class.
    // Pointer Object will NOT be able to call any of the data members of the derived class because it is a base class pointer
    //* After creating a virtual function (it solve the ambiguity problem):
    // When two functions have the same name and are in two different class inherited to each other then :
    // When we make a pointer of base class and point it to the object of base class and when we call a function through that object then, the function of the base class will be called
    // And when by using the same pointer of base class and point it to the object of derived class and when we call a function through that object then, the function of the derived class will be called
    // Using of virtual keyword in base class and this calling method is very helpful when we write a long code or when we are working with inheritance or when we have to call the functions of base class and derived class of same name randomly as per our needs.

    return 0;
}