/*A static data member in a class has the following properties:
1> It is shared by all objects of the class. This means that all instances of the class will have access to and share the same static data member.
2> It has a single copy in memory. Unlike regular data members, which have separate copies for each object, a static data member has only one copy for the entire class.*/
//* The Main Important purpose of using a static data member is that it value continues from where it left off from one object to another.
//* in this example, when the same functions are called by 3 different objects- harry, rohan, lovish then instead of intialising 'count=0' everytime (which is usually done for normal variable), the static data member instead continues from where it left off from one object to another.

/*Two properties of static functions are:
1> They can access static data members only
2> They can run without making any object for the class*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // This is a STATIC DATA MEMBER
                      // By Default value of any static data member is 0

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    { // This is a STATIC FUNCTION
        // cout<<id; // throws an error since one of the most important properties of static function is that it can only access the static data member 'count' in the class and nothing else.
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count = 100; // You can change the default value whenever you want.
int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount(); // STATIC FUNCTIONS does'nt need objects to be called.

    rohan.setData();
    rohan.getData();
    Employee::getCount(); // STATIC FUNCTIONS does'nt need objects to be called.

    lovish.setData();
    lovish.getData();
    Employee::getCount(); // STATIC FUNCTIONS does'nt need objects to be called.

    return 0;
}