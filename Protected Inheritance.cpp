#include <iostream>
using namespace std;

class Base
{
protected:
    int a; // private visibility mode jaisa hota hai but the difference is that it is inheritable

private:
    int b;
};

/*
                            Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited              	Not Inherited          Not Inherited
Protected members           	Protected               	Private               Protected
Public members                	Public	                    Private               Protected
*/

// Security can go to upper level or remain at the same level but never go to lower level.

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}