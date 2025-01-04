#include <iostream>
using namespace std;

/*LOCAL VARIABLE IS GIVEN PREFERENCE OVER GLOBAL VARIABLE
BOTH LOCAL AND GLOBAL VARIABLES CAN SHARE THE SAME NAME*/

// Global Variable declaration and definition
int variable = 52;

void print()
{
    cout << "\nGlobal variable= " << variable << endl;
}

int main()
{
    // Global Variable declaration and definition
    int variable = 7;

    bool example = true; //'bool' is also a built-in data type which prints '1' if true, otherwise '0'
    cout << "Bool value = " << example << endl;

    cout << "\nLocal variable= " << variable << endl; // Here even if variable was assigned 52 first but it will print 7 since compiler starts compiling from inside main function and therefore local variable is given more preference than global variable because gobal function is defined outside the main function

    print();

    cout<<"\nGlobal variable= " << ::variable << endl; //If we want to print the global variable normally (without calling the function) then we use scope resoulution operaator

    return 0;
}