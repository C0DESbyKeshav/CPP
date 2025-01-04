#include <iostream>
#include <vector>
using namespace std;

/* DIFFERENCE B/W ARRAY & VECTOR:
    1. Vector is resizable whereas an array is not.
    2. As we keep entering the elements of a vector, it's length gets automatically set according to the number of current elements.
*/

template <class T>
void display(vector<T> &v) // This line is same as declaring any other function
                           // ex: void display(int a)  // here, the data type of variable 'a' is 'int'
                           // vector<T> is itself being used as the data type of vector 'v'
{
    cout << "The elements of vector are:" << endl;
    // This loop will run untill all the contents of vector 'v' is displayed.
    for (int i = 0; i < v.size(); i++) // size() is a function under vector library which returns the size of any vector.
    {
        // cout<<v[i]<<"    ";
        cout << v.at(i) << "    "; // Alternative
    }
    cout << endl
         << endl;
}

int main()
{
    // DECLARATION OF A VECTOR HAVING NAME 'vec1' & DATA TYPE 'INTEGER'.
    vector<int> vec1; // Empty vector of ints

    // ACCEPTING THE INPUT (ELEMENTS OF VECTOR) FROM THE USER
    int element, size;
    cout << "Enter the size of vector: ";
    cin >> size;
    cout << "Enter the elements of vector:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        vec1.push_back(element); // 'push_back()' is a modifier which is used to add element at the end of a vector.
    }
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << endl;
    display(vec1);

    vector<int>::iterator iter = vec1.begin(); // 'iter' is declared as an iterator of vector 'vec1' and it points at the beginning position of vector 'vec1.
    vec1.insert(iter, 566);                    // Iterator is like a pointer that points at a specific position of vector.
                                               // In this line, '566' is inserted at the beginning position of vector 'vec1' with the help of an iterator 'iter'.
    cout << "After insertion: " << endl;
    display(vec1);

    cout << "---------------------------------------------------------------------------------------" << endl;

    // TO INSERT A NEW NUMBER AT 3RD POSITION OF VECTOR:
    vec1.insert(iter + 2, 648);
    cout << "After insertion: " << endl;
    display(vec1);

    cout << "---------------------------------------------------------------------------------------" << endl;

    // TO INSERT A SAME NUMBER MULTIPLE TIMES IN A VECTOR AT SPECIFIC POSITION:
    vec1.insert(iter + 5, 5, 257); // 5 times at 6th position
    cout << "After insertion: " << endl;
    display(vec1);

    cout << "---------------------------------------------------------------------------------------" << endl;

    // IMPLEMENTING pop_back() FUNCTION:
    cout << "After pop_back(): " << endl;
    vec1.pop_back(); // 'pop_back()' is a modifier which is used to delete an element at the end of a vector.
    display(vec1);

    cout << "---------------------------------------------------------------------------------------" << endl;

    // WAYS TO CREATE A VECTOR
    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('5');
    vec2.push_back('0');
    vec2.push_back('8');
    vec2.push_back('4');
    display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from vec2
    display(vec3);

    cout << "---------------------------------------------------------------------------------------" << endl;

    vector<int> vec4(6, 8); // 6-element integer vector of 8s
    display(vec4);

    cout << "Size of vector vec4:" << endl
         << vec4.size() << endl
         << endl; // To print size of any vector

    cout << "---------------------------------------------------------------------------------------" << endl;

    vector<int>::iterator iter2 = vec4.end(); // 'iter2' is declared as an iterator of vector 'vec4' and it points at the ending position of vector 'vec4.
    vec4.insert(iter2, 566);                  // Iterator is like a pointer that points at a specific position of vector.
                                              // In this line, '566' is inserted at the ending position of vector 'vec4' with the help of an iterator 'iter2'.
    cout << "After insertion: " << endl;
    display(vec4);

    cout << "---------------------------------------------------------------------------------------" << endl;

    // VECTOR ASSIGNMENT:
    vector<int> x(3, 1); // 3-element integer vector of 1s
    vector<int> y(5, 4); // 5-element integer vector of 4s

    display(x);
    display(y);

    x = y;             // assigning the size and contents of vector y to vector x
    y = vector<int>(); // assigning the size and contents of a zero length vector to vector y

    cout << "Size of vector x:" << endl
         << x.size() << endl
         << endl;
    cout << "Size of vector y:" << endl
         << y.size() << endl
         << endl;

    display(x);
    display(y);

    cout << "---------------------------------------------------------------------------------------" << endl;

    // CAPACITY & MAXIMUM SIZE OF A VECTOR:
    cout << "Size of vec4: " << vec4.size() << endl;

    cout << "Capacity of vec4: " << vec4.capacity() << endl; // Returns the size of the storage space currently allocated for the vector, expressed in terms of elements.
                                                             // This capacity is not necessarily equal to the vector size. It can be equal or greater, with the extra space allowing to accommodate for growth without the need to reallocate on each insertion.

    cout << "Maximum size of vec4: " << vec4.max_size() << endl
         << endl; // Returns the maximum number of elements that the vector can hold.
                  // This is the maximum potential size the container can reach due to known system or library implementation limitations, but the container is by no means guaranteed to be able to reach that size: it can still fail to allocate storage at any point before that size is reached.

    cout << "---------------------------------------------------------------------------------------" << endl;

    // RESIZE THE VECTOR:
    vector<int> vec5;
    for (int i = 1; i <= 10; i++)
    {
        vec5.push_back(i); // filling vec5
    }
    display(vec5);
    vec5.resize(5);
    cout << "After implementing 'resize(5)' on above vector:" << endl;
    display(vec5);
    vec5.resize(8, 100);
    cout << "After implementing 'resize(8, 100)' on above vector:" << endl;
    display(vec5);
    vec5.resize(12);
    cout << "After implementing 'resize(12)' on above vector:" << endl;
    display(vec5);
    /* Resizes the container so that it contains n elements.
       If n is smaller than the current container size, the content is reduced to its first n elements, removing those beyond (and destroying them).
       If n is greater than the current container size, the content is expanded by inserting at the end as many elements as needed to reach a size of n. If val is specified, the new elements are initialized as copies of val, otherwise, they are value-initialized.
       If n is also greater than the current container capacity, an automatic reallocation of the allocated storage space takes place.
       Notice that this function changes the actual content of the container by inserting or erasing elements from it.
    */

    cout << "---------------------------------------------------------------------------------------" << endl;

    // IMPLEMENTATION OF clear() FUNCTION:
    vector<int> vec6;
    for (int i = 1; i <= 5; i++)
    {
        vec6.push_back(i);
    }
    display(vec6);
    vec6.clear(); // Clears the contents of complete vector vec6.
    cout << "After implementing clear() on above vector:" << endl;
    if (vec6.size() == 0)
    {
        cout << "Khaali hai vector aise tukur tukur naa dekho..!" << endl
             << endl;
    }
    else
    {
        display(vec6);
    }

    cout << "---------------------------------------------------------------------------------------" << endl;

    // IMPLEMENTATION OF empty() FUNCTION:
    /*  Tests whether vector is empty.
        empty() is a boolean type function.
        Returns whether the vector is empty (i.e. whether its size is 0).
        This function does not modify the container in any way.
        Return Value: true if the container size is 0, false otherwise.
    */
    vector<int> vec7;
    for (int i = 1; i <= 5; i++)
    {
        vec7.push_back(i);
    }
    display(vec7);
    if (vec7.empty() == true) // i.e.(if the vector is empty)
    {
        cout << "The above vector is empty." << endl;
    }
    else
    {
        cout << "The above vector isn't empty." << endl
             << endl;
    }

    cout << "---------------------------------------------------------------------------------------" << endl;

    // IMPLEMENTING reserve() FUNCTION:
    /* Request a change in capacity
    Requests that the vector capacity be at least enough to contain n elements.
    If n is greater than the current vector capacity, the function causes the container to reallocate its storage increasing its capacity to n (or greater).
    In all other cases, the function call does not cause a reallocation and the vector capacity is not affected.
    This function has no effect on the vector size and cannot alter its elements.*/
    vector<int>::size_type sz;
    vector<int> foo;
    sz = foo.capacity();
    cout << "Implementing reserve() function:\nMaking foo grow:\n";
    for (int i = 0; i < 100; ++i)
    {
        foo.push_back(i);
        if (sz != foo.capacity())
        {
            sz = foo.capacity();
            cout << "Capacity changed: " << sz << '\n';
        }
    }

    vector<int> bar;
    sz = bar.capacity();
    bar.reserve(100); // this is the only difference with foo above
    cout << "Making bar grow:\n";
    for (int i = 0; i < 100; ++i)
    {
        bar.push_back(i);
        if (sz != bar.capacity())
        {
            sz = bar.capacity();
            cout << "Capacity changed: " << sz << endl
                 << endl
                 << endl;
        }
    }

    cout << "---------------------------------------------------------------------------------------" << endl;

    // IMPLEMENTING shrink_to_fit() FUNCTION:
    /*Requests the container to reduce its capacity to fit its size.
    The request is non-binding, and the container implementation is free to optimize otherwise and leave the vector with a capacity greater than its size.
    This may cause a reallocation, but has no effect on the vector size and cannot alter its elements.*/
    std::vector<int> vec8(100);
    std::cout << "1. Capacity of vec8: " << vec8.capacity() << '\n';

    vec8.resize(10);
    std::cout << "2. Capacity of vec8 after implementing resize(10): " << vec8.capacity() << '\n';

    vec8.shrink_to_fit();
    std::cout << "3. Capacity of vec8 after implementing shrink_to_fit(): " << vec8.capacity() << endl
              << endl
              << endl;

    cout << "---------------------------------------------------------------------------------------" << endl;

    // IMPLEMENTATION OF front() / back() FUNCTIONS:
    /*Returns a reference to the first element in the vector.
    Unlike member vector::begin, which returns an iterator to this same element, this function returns a direct reference.
    Calling this function on an empty container causes undefined behavior.*/
    vector<int> vec9(2);
    vec9.front() = 30;
    vec9.back() = 52;
    display(vec9);

    cout << "---------------------------------------------------------------------------------------" << endl;

    // IMPLEMENTING erase() function:
    vector<int> vec10;
    for (int i = 1; i <= 10; i++)
    {
        vec10.push_back(i);
    }
    display(vec10);
    cout << "Erasing 6th element from above vector using erase():" << endl;
    vec10.erase(vec10.begin() + 5);
    display(vec10);
    cout << "Erasing first 3 elements from above vector using erase():" << endl;
    vec10.erase(vec10.begin(), vec10.begin() + 3);
    display(vec10);

    cout << "---------------------------------------------------------------------------------------" << endl;

    // SWAPPING THE VECTORS:
    vector<int> vector1(3, 100); // three ints with a value of 100
    vector<int> vector2(5, 200); // five ints with a value of 200
    cout << "Before swapping both the below vectors:" << endl;
    display(vector1);
    display(vector2);
    vector1.swap(vector2);
    cout << "After swapping both the below vectors:" << endl;
    display(vector1);
    display(vector2);

    cout << "---------------------------------------------------------------------------------------" << endl;

    // IMPLEMENTING emplace() function:
    /*The container is extended by inserting a new element at position. This new element is constructed in place using args as the arguments for its construction.
    This effectively increases the container size by one.
    An automatic reallocation of the allocated storage space happens if -and only if- the new vector size surpasses the current vector capacity.*/
    vector<int> vec11;
    for (int i = 1; i <= 5; i++)
    {
        vec11.push_back(i);
    }
    display(vec11);
    cout << "After inserting a new element at the 3rd position of the above vector:" << endl;
    vec11.emplace(vec11.begin() + 2, 100); // Inserts a new element at the 3rd position of vec11 with 100.
    display(vec11);

    return 0;
}