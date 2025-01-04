#include <iostream>
using namespace std;
int main()
{
    float a[5] = {10.2, 3.9, 4.6, 5.5, 6.9};
    float *ptr, sum = 0;
    ptr = a; // here, pointer 'ptr' is pointing to the whole array 'a'
    cout << "\nStarting address\tSize\t\tEnding address\t\tValue of sum";
    for (int i = 0; i < 5; i++)
    {
        sum = sum + *ptr; // Adding 'sum' and value of the array to which 'ptr' is pointing
                          // For i=0, ptr is pointing "10.2", and so on...
                          // ptr changes for every "ptr=ptr+1"

        cout << "\n"
             << ptr << "\t\t" << sizeof(*ptr) << "\t\t"; // here, 'sizeof' is a feature which displays the size of value of the array to which 'ptr' is pointing
                                                         // For i=0, ptr is pointing "10.2", and so on...
                                                         // the size taken by '10.2' will get displayed
                                                         // ptr changes for every "ptr=ptr+1"
        ptr = ptr + 1;                                   // i.e ptr++
        cout << ptr << "\t\t" << sum;                    // Ending address of 1st value means the starting address of 2nd value in an array
                                                         // And hence the ending address is getting printed after the increment in ptr
    }

    //*********************** ANOTHER EXAMPLE ***********************
    int marks[4] = {23, 45, 56, 89};
    int *p = marks;
    cout << endl
         << endl
         << *(p++) << endl; // 1st prints then increments, here it prints ptr i.e marks[0] and then it becomes ptr+1 i.e marks[1]
    cout << *(++p) << endl; // 1st increments then prints, before printing it becomes ((ptr+1)+1)= ptr+2 i.e marks[2] and then prints it
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}