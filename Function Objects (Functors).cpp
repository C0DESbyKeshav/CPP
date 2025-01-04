#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

// FUNCTION OBJECTS: Function wrapped in a class so that it is available like an object.
// There are many different functions under header file "functional" & "algorithm" which can be found on the website "https://cplusplus.com/reference/functional/?kw=functional".

int main()
{
    int arr1[] = {54, 6, 42, 17, 9, 1};
    sort(arr1, arr1 + 6);
    cout << "The contents of array are: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << "    ";
    }
    cout << endl;

    int arr2[] = {5, 69, 7, 13, 44};
    sort(arr2, arr2 + 5, greater<int>());
    cout << "The contents of array are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << "    ";
    }

    return 0;
}