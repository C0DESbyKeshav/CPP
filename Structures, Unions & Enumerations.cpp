#include <iostream>
using namespace std;

/*USER DEFINED DATA TYPES:
    1. Class: The building block of object-oriented programming. A class defines its own data members and member functions. Objects are created from classes.
    2. Structure: A user-defined data type that groups items of possibly different types into a single type. Structures are used to create records.
    3. Union:  Similar to structures, but all members share the same memory location. Only one member can be accessed at a time.
    4. Enumeration (Enum): A set of named integer constants. Enums provide a way to define symbolic names for integral values.
*/

//********************* Structures in C++ **********************
// Definition of Structures ...........(1)
struct Student
{
    int roll_no;
    float percentage;
    char grade;
};

// There is a shortcut way of defining the structures ............(2)
// typedef struct Student //here typedef means that the thing that I 1st used to call 'struct Student', it will now be called 'St'
//{
//     int roll_no;
//     float percentage;
//     char grade;
// }St;   //Here, instead of 'St' you can write anything

//********************* Union in C++ *************************
// Definition of Union ...........(1)
union Money
{
    /*Imagine you want something from a certain person in barter system then you have to give something to that person in return
    You have 3 options: you can give rice(in kg) OR money(in pounds) OR car
    Only one thing among these 3. Then here the union comes in help.
    It avoids the wastage of memory allotment to all 3 of them, instead it allots the memory only to one of them hence increse in efficiency.*/
    int rice_in_kg;
    float pounds;
    char car;
};

// There is a shortcut way of defining the union ............(2)
// typedef union Money //here typedef means that the thing that I 1st used to call 'struct Student', it will now be called 'St'
//{
//     /*Imagine you want something from a certain person in barter system then you have to give something to that person in return
//     You have 3 options: you can give rice(in kg) OR money(in pounds) OR car
//     Only one thing among these 3. Then here the union comes in help.
//     It avoids the wastage of memory allotment to all 3 of them, instead it allots the memory only to one of them hence increase in efficiency.*/
//     int rice_in_kg;
//     float pounds;
//     char car;
// }mo;   //Here, instead of 'mo' you can write anything

int main()
{
    //********************* Structures in C++ **********************
    // ## Definition of Structures..............(1)
    struct Student Aakash;
    Aakash.roll_no = 12;
    Aakash.percentage = 72.00;
    Aakash.grade = 'B';
    cout << "Roll number of Aakash: " << Aakash.roll_no << endl;
    cout << "Percentage of Aakash: " << Aakash.percentage << endl;
    cout << "Grade of Aakash: " << Aakash.grade << endl
         << endl;

    struct Student Shubham;
    Shubham.roll_no = 53;
    Shubham.percentage = 74.17;
    Shubham.grade = 'B';
    cout << "Roll number of Shubham: " << Shubham.roll_no << endl;
    cout << "Percentage of Shubham: " << Shubham.percentage << endl;
    cout << "Grade of Shubham: " << Shubham.grade << endl
         << endl;

    // ## Definition of Structures..............(2)
    // St Sumit;
    // Sumit.roll_no = 12;
    // Sumit.percentage = 72.00;
    // Sumit.grade = 'B';
    // cout<<"Roll number of Sumit: "<<Sumit.roll_no<<endl;
    // cout<<"Percentage of Sumit: "<<Sumit.percentage<<endl;
    // cout<<"Grade of Sumit: "<<Sumit.grade<<endl<<endl;
    //
    // St Ninad;
    // Ninad.roll_no = 53;
    // Ninad.percentage = 74.17;
    // Ninad.grade = 'B';
    // cout<<"Roll number of Ninad: "<<Ninad.roll_no<<endl;
    // cout<<"Percentage of Ninad: "<<Ninad.percentage<<endl;
    // cout<<"Grade of Ninad: "<<Ninad.grade<<endl<<endl;

    //********************* Union in C++ *************************
    // ## Definition of Union..............(1)
    union Money Mr_Roy;
    Mr_Roy.rice_in_kg = 92;
    // Mr_Roy.pounds = 9547.60;
    // Mr_Roy.car = 'H';
    cout << "Rice in kg given to  Mr. Roy: " << Mr_Roy.rice_in_kg << endl
         << endl;
    // cout<<"Money in pounds given to Mr. Roy: "<<Mr_Roy.pounds<<endl<<endl;
    // cout<<"Car given to Mr. Roy: "<<Mr_Roy.car<<endl<<endl;

    union Money Mr_Oberoi;
    // Mr_Oberoi.rice_in_kg = 73;
    Mr_Oberoi.pounds = 2589.43;
    // Mr_Oberoi.car = 'M';
    // cout<<"Rice in kg given to  Mr. Oberoi: "<<Mr_Oberoi.rice_in_kg<<endl<<endl;
    cout << "Money in pounds given to Mr. Oberoi: " << Mr_Oberoi.pounds << endl
         << endl;
    // cout<<"Car given to Mr. Oberoi: "<<Mr_Oberoi.car<<endl<<endl;

    // ## Definition of Union..............(2)
    // mo Mr_Bhisnoi;
    // Mr_Bhisnoi.rice_in_kg = 92;
    // Mr_Bhisnoi.pounds = 9547.60;
    // Mr_Bhisnoi.car = 'H';
    // cout<<"Rice in kg given to Mr. Bhisnoi: "<<Mr_Bhisnoi.rice_in_kg<<endl<<endl;
    // cout<<"Money in pounds given to Mr. Bhisnoi: "<<Mr_Bhisnoi.pounds<<endl<<endl;
    // cout<<"Car given to Mr. Bhisnoi: "<<Mr_Bhisnoi.car<<endl<<endl;
    //
    // mo Mr_Singhania;
    // Mr_Singhania.rice_in_kg = 73;
    // Mr_Singhania.pounds = 2589.43;
    // Mr_Singhania.car = 'M';
    // cout<<"Rice in kg given to Mr. Singhania: "<<Mr_Singhania.rice_in_kg<<endl<<endl;
    // cout<<"Money in pounds given to Mr. Singhania: "<<Mr_Singhania.pounds<<endl<<endl;
    // cout<<"Car given to Mr. Singhania: "<<Mr_Singhania.car<<endl<<endl;

    //********************* Enumeration in C++ **********************
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout<<m1<<endl;
    //cout<<breakfast<<endl;
    //cout<<lunch<<endl;
    //cout<<dinner<<endl;

    return 0;
}