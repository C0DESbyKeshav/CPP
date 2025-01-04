#include <iostream>
using namespace std;

// new & delete are just keywords that allocates and frees up memory space.
//* new & delete operators / keywords are useless without the use of pointer variables.

int main()
{

    // Intro of Pointer
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;

    //* Intro of new operator
    // int *p = new int(40);
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20; // Alternative Syntax
    arr[2] = 30;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    //* Intro of delete operator
    delete[] arr; // Frees up the memory allocated to arr and hence now the elements of arr will give garbage values.
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}
