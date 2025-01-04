#include <iostream>
using namespace std;
int main()
{
    // Variable declarations
    int size, no_of_rotations;

    // Input parameters
    cout << "Size of array = ";
    cin >> size;
    int arr[size];
    cout << "Number of rotations in array = ";
    cin >> no_of_rotations;
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Representation of the array taken by input
    cout << endl
         << "Your array is:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "(" << i << ")    ";
    }

    // Logic Building
    /*
    1. Move the 'no_of_rotations' no of elements of the original array from right to an another array of size 'no_of_rotations'.
    2. Shift all the elements of original array to the right by 'no_of_rotations' positions.
    3. Move all the elements of the second array to the original array in the same order.
    4. Now, the original array is your desired array.
    e.x.:
    Let no_of_rotations = 2, size = 7, arr[7] = {1,2,3,4,5,6,7}
    So, the size of second array of type integer 'temp_arr' is the same as 'no_of_rotations' i.e temp_arr[2] = {9448, -04876}. Initially, garbage values.
    1. arr = 1 2 3 4 5 _ _ , temp_arr = 6 7
    2. arr = _ _ 1 2 3 4 5 , temp_arr = 6 7
    3. arr = 6 7 1 2 3 4 5 , temp_arr = _ _
    where, '_' means the garbage values.
    4. Now, 'arr' is your rotated array, where each element is rotated by 'no_of_rotations' rotations towards right.
    */

    // Rotation of the Array
    int temp_arr[no_of_rotations], index = 0;

    /* STEP 1 */
    for (int i = (size - no_of_rotations); i <= size; i++)
    {
        temp_arr[index] = arr[i];
        index++;
    }

    /* STEP 2 */
    for (int i = (size - no_of_rotations) - 1; i >= 0; i--)
    {
        arr[i + no_of_rotations] = arr[i];
    }

    /* STEP 3 */
    index = 0;
    for (int i = 0; i < no_of_rotations; i++)
    {
        arr[i] = temp_arr[index];
        index++;
    }

    // Output Display
    cout << endl
         << endl
         << "The rotated array is" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "(" << i << ")    ";
    }

    return 0;
}