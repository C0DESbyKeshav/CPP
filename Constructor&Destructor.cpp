#include <iostream>
using namespace std;

/* Creating a Constructor
    Constructor is a special member function with the same name as of the class.
    It is used to initialize the objects of its class.
    It is automatically invoked whenever an object is created.
*/

/* Characteristics of Constructors
    1. It should be declared in the public section of the class.
    2. They are automatically invoked whenever the object is created.
    3. They cannot return values and do not have return types.
    4. It can have default arguments.
    5. We cannot refer to their address.
*/

class Ratio
{
public:
    Ratio() // Constructor defined
            // ----> This is a default constructor as it takes no parameters
    {
        cout << "\nObject is born";
    }

    int print()
    {
        cout << "\nNow object in use";
        return 0;
    }

    ~Ratio() // Destructor defined
    {
        cout << "\nObject dies";
    }
};

int main()
{
    Ratio obj; // constructor is always called whenever object of that class is created
    obj.print();
    // destructor is always by default called after the object is destroyed
    return 0;
}