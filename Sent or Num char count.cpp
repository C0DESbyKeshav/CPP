#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int size = 999999, length;
    char num[size];
    cout << "\nEnter a number or a sentence:\n";
    cin.getline(num, size);
    length = strlen(num);
    cout << "\nIt is " << length << " keys long.";
    return 0;
}