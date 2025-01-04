#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // declaring an object of the type ofstream
    ofstream write;
    // connecting the object write to the text file using the member function open()
    write.open("Sample.txt"); // Altenative of -->  ofstream write("Sample.txt")
    // writing to the file
    write << "This is me\n";
    write << "This is also me";
    // closing the file connection
    write.close();
    
    // declaring an object of the type ifstream
    ifstream extract;
    // declaring string variable st
    string st;
    // opening the text file into in
    extract.open("Sample.txt");
    // giving output the string lines by storing in st until the file reaches the end of it
    while (extract.eof() == 0) // eof() function is the end-of-file function that places the cursor to the end of the file.
    {
        // using getline to fill the whole line in st
        getline(extract, st);
        cout << st << endl;
    }

    return 0;
}
