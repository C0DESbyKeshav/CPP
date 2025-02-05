#include <iostream>
using namespace std;
int main()
{
    int c;
    for (int i = 2; i <= 541; i++)
    {
        c = 0;
        for (int j = 2; j <= i; j++)
            if (i % j == 0)
            {
                c++;
            }
        if (c == 1)
        {
            cout << i << endl;
        }
    }
}