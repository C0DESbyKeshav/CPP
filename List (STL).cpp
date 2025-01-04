#include <iostream>
#include <list>
using namespace std;

/*Diagram of an element of Linked List:
        ----------------------
        |        |           |
        |  INFO  |  POINTER  |
        |        |           |
        ----------------------
*/

/*1. If you want the operation of insertion / deletion fast then use Linked List.
2. If you want the operation of accesing the elements fast then use array.*/

void display(list<int> &l)
{
    list<int>::iterator it;
    cout << "The elements of the list are:" << endl;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << "    ";
    }
    cout << endl
         << endl;
}

int main()
{
    // IMPLEMENTATION OF empty() FUNCTION IN LIST
    // empty() is a bool type function (true or false)
    list<int> l1(5, 1); // 1st argument -> how many times to repeat a number
                        // argument 2 -> the number to be repeated
    display(l1);
    cout << "After implementing empty() function on above list: " << endl;
    if (l1.empty() == true)
    {
        cout << "The above list is empty." << endl;
    }
    else
    {
        cout << "The above list isn't empty." << endl
             << endl
             << endl;
    }

    list<int> l2(0, 1); // 1st argument -> how many times to repeat a number
                        // argument 2 -> the number to be repeated
    display(l2);
    cout << "After implementing empty() function on above list:" << endl;
    if (l2.empty() == true)
    {
        cout << "The above list is empty." << endl;
    }
    else
    {
        cout << "The above list isn't empty." << endl;
    }

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTATION OF max_size() FUNCTION
    list<int> l3(5, 5);
    display(l3);
    cout << "The maximum size limit of the above list is: " << l3.max_size();

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTATION OF front() & back() FUNCTION
    list<int> l4;
    for (int i = 0; i < 5; i++)
    {
        l4.push_back(i);
    }
    display(l4);
    cout << "The front element of the above list is: " << l4.front() << endl
         << "The back element of the above list is: " << l4.back() << endl;

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTATION OF assign() FUNCTION
    list<int> l5;
    l5.assign(5, 0);
    display(l5);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTATION OF push_front() & push_back() FUNCTION
    list<int> l6(5, 8);
    display(l6);
    l6.push_front(4);
    l6.push_back(0);
    cout << "After implementing push_front(4) and push_back(0) functions:" << endl;
    display(l6);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTATION OF pop_front() & pop_back() FUNCTION
    list<int> l7;
    for (int i = 0; i < 5; i++)
    {
        l7.push_back(i);
    }
    display(l7);
    l7.pop_front();
    l7.pop_back();
    cout << "After implementing pop_front() and pop_back() functions:" << endl;
    display(l7);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTATION OF clear() FUNCTION
    list<int> l8(5, 6);
    display(l8);
    l8.clear();
    cout << "After implementing clear() function on the above list:" << endl;
    display(l8);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTATION OF insert() FUNCTION
    list<int> l9(5, 0);
    display(l9);
    list<int>::iterator iter = l9.begin();

    l9.insert(iter, 100);
    cout << "Inserting 100 at beginning position of above list:" << endl;
    display(l9);

    iter++;
    l9.insert(iter, 3, 200);
    cout << "Inserting 200 three times at 3rd position of above list:" << endl;
    display(l9);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTATION OF erase() FUNCTION
    list<int> l10;
    for (int i = 1; i <= 5; i++)
    {
        l10.push_back(i);
    }
    display(l10);
    list<int>::iterator iter2 = l10.begin();

    l10.erase(iter2);
    cout << "Erasing first element from the above list:" << endl;
    display(l10);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING resize() FUNCTION
    list<int> l11;
    for (int i = 1; i <= 10; i++)
    {
        l11.push_back(i);
    }
    display(l11);

    l11.resize(5);
    cout << "After resizing the above list to 5: " << endl;
    display(l11);

    l11.resize(7); // Since, size badh raha hai toh by default added elements ka value 0 hota hai
    cout << "After resizing the above list to 7: " << endl;
    display(l11);

    ~l11.resize(10, 2); // Since, size badh raha hai toh by default added elements ka value 0 hota hai
                        // But, we can set that initializer value
                        // Here, initializer = 2;
    cout << "After resizing the above list from 10 (initializer = 2):" << endl;
    display(l11);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING swap() FUNCTION
    list<int> l12{1, 2, 3, 4, 5}; //* WE CAN ALSO DECLARE & DEFINE A LIST LIKE THIS
    list<int> l13{6, 7, 8, 9, 10};

    cout << "Before swapping:" << endl;
    display(l12);
    display(l13);

    l12.swap(l13);

    cout << "After swapping the above two lists:" << endl;
    display(l12);
    display(l13);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING merge() FUNCTION
    list<int> l14{1, 2, 3, 4, 5};
    list<int> l15{6, 7, 8, 9, 10};

    display(l14);
    display(l15);

    l14.merge(l15);

    cout << "After merging both the above lists:" << endl;

    display(l14);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING remove() FUNCTION
    list<int> l16{3, 8, 4, 6, 2, 6, 9, 1};
    display(l16);

    l16.remove(6); // All the occurences of 6 will be removed
    display(l16);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING reverse() FUNCTION
    list<int> l17{7, 8, 3, 5, 4};
    display(l17);

    l17.reverse();
    cout << "After reversing the above list:" << endl;
    display(l17);

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING sort() FUNCTION
    list<int> l18{2, 9, 1, 0, 3, 8, 4, 7, 5, 6};
    display(l18);

    l18.sort();
    cout << "After implementing sort() function:" << endl;
    display(l18);

    return 0;
}