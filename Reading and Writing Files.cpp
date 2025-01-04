#include <iostream>
#include <fstream>
using namespace std;

/*
These are some useful classes for working with files in C++
fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase
*/

/*
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
Using the constructor
Using the member function open() of the class
*/

int main()
{
    //* Write operation: Flow of data: From program to file
    // Opening files using constructor and writing it
    string name;
    ofstream out("Sample.txt"); // Connecting our file with "out" stream
    // "ofstream" is a class given by "fstream" header file and "out" is an object of class "ofstream" that can have any name.
    cout << "Enter your name: ";
    cin >> name;
    out << name + " is my name"; // Nothing, just an alternative of -->>   out<<name<<" is my name";
    out.close();                 // Disconnecting our file
    // This is important if we want to write and read data from the same file.

    //* Read operation: Flow of data: From file to program
    string st;
    // Opening files using constructor and reading it
    ifstream in("Sample.txt"); // Connecting our file with "in" stream
    // "ifstream" is a class given by "fstream" header file and "in" is an object of class "ifstream" that can have any name.
    in >> st; // Will only take first word from file "Sample.txt" and will store that word into string "st".
    // getline(in, st);   // Will take the complete text from file "Sample.txt" and will store the words into string "st".
    cout << "Your first name is " << st;
    in.close(); // Disconnecting our file
    // This is important if we want to write and read data from the same file.

    return 0;
}