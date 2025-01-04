#include <iostream>
#include <map> // This is a header file for ordered maps
// #include<unordered_map>   // This is a header file for unordered maps
#include <string>
using namespace std;

// Map is used to store key-value pairs.
// Map is an associative array.

// This is like an container that stores the data like -> e.x. (of excel sheet)
/* 1.   Keshav  99
   2.   Sagar   57
   3.   Amit    2

 Map stores all this in the form of an array.
*/

int main()
{
    // DECLARATION & DEFINITION OF A MAP:
    map<string, int> marks;
    marks["Keshav"] = 99;
    marks["Sagar"] = 57;
    marks["Amit"] = 2;

    // IMPLEMENTING insert() FUNCTION:
    marks.insert({{"Sujal", 89}, {"Pratham", 20}});

    // IMPLEMENTING begin() / end() / first() / second() FUNCTIONS:
    map<string, int>::iterator it;
    for (it = marks.begin(); it != marks.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
        // Since, ordered map is used, so, the names will be printed in alphabetical order.
    }

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING size() FUNCTION:
    cout << "The size of map is " << marks.size() << endl;

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING max_size() FUNCTION:
    cout << "The maximum size of map is " << marks.max_size() << endl;

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING empty() FUNCTION:
    if (marks.empty() == true)
    {
        cout << "The map is empty" << endl;
    }
    else
    {
        cout << "The map is not empty" << endl;
    }

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING erase() FUNCTION:
    marks.erase("Amit");
    cout << "After erasing 'Amit' from map:" << endl;
    for (it = marks.begin(); it != marks.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
        // Since, ordered map is used, so, the names will be printed in alphabetical order.
    }

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING swap() FUNCTION:
    map<char, int> m1, m2;
    m1['a'] = 10;
    m1['b'] = 20;
    m1['c'] = 30;
    m2['x'] = 100;
    m2['y'] = 200;

    cout << "BEFORE SWAPPING: " << endl;
    map<char, int>::iterator iter;
    cout << "m1 contains:" << endl;
    for (iter = m1.begin(); iter != m1.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
        // Since, ordered map is used, so, the names will be printed in alphabetical order.
    }
    cout << "m2 contains:" << endl;
    for (iter = m2.begin(); iter != m2.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
        // Since, ordered map is used, so, the names will be printed in alphabetical order.
    }

    m1.swap(m2);

    cout << endl
         << "AFTER SWAPPING: " << endl;
    cout << "m1 contains:" << endl;
    for (iter = m1.begin(); iter != m1.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
        // Since, ordered map is used, so, the names will be printed in alphabetical order.
    }
    cout << "m2 contains:" << endl;
    for (iter = m2.begin(); iter != m2.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
        // Since, ordered map is used, so, the names will be printed in alphabetical order.
    }

    cout << endl
         << "----------------------------------------------------------------" << endl
         << endl;

    // IMPLEMENTING clear() FUNCTION:
    cout << "m1 (Before):" << endl;
    for (iter = m1.begin(); iter != m1.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
        // Since, ordered map is used, so, the names will be printed in alphabetical order.
    }

    m1.clear();

    cout << endl
         << "m1 (After implementing clear() on m1):" << endl;
    for (iter = m1.begin(); iter != m1.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
        // Since, ordered map is used, so, the names will be printed in alphabetical order.
    }

    return 0;
}