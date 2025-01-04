#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value

//int count = 0; // This global variable is mandatory so that the value of 'count' continues whenever it is used between constructors & destructors.

class num
{
    static int count;   // This is a STATIC DATA MEMBER
                        // By Default value of any static data member is 0

public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~num()
    {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1; // As the object is created, the default constructor will be called.
    // For n1 --> count=0+1=1
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3; // As both the objects are created, the default constructor for both will be called in action.
        // For n2 --> count=1+1=2   // For n3 --> count=2+1=3
        cout << "Exiting this block" << endl;
        // Since, there is no further use of both the objects n2 and n3, the destructor will be called in action.
        // Before printing of statement ==> For n2 --> count=2   // For n3 --> count=3
        // ---->But the count-- will be done after the printing of destructor statement.
        // After printing of statement ==> For n2 --> count=3-1=2   // For n3 --> count=2-1=1
    }
    // Since, there is no further use of the object n1, the destructor will be called in action.
    // After printing of statement ==> For n1 --> count=1
    // ---->But the count-- will be done after the printing of destructor statement.
    // After printing of statement ==> For n1 --> count=1-1=0
    cout << "Back to main" << endl;
    return 0;
}