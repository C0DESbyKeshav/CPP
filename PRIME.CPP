#include <iostream>
using namespace std;
int main()
{
    repeat:
    int n, i, c;       // c=count
    cout << "\n\nENTER A NATURAL NUMBER:\n\n";
    cin >> n;
    c = 0;

    if (n > 0)
    {

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }

        if (c == 2)        //here, c=2 as a prime number is a number which is only divisible by itself and by the table of 1
        {
            cout << "\n"<< n << " IS A PRIME NUMBER.";
        }
        else
        {
            if (n == 1)
            {
                cout << "\n"<< n << " IS NEITHER PRIME NOR COMPOSITE NUMBER.";
            }
            else
            {
                cout << "\n"<< n << " IS A COMPOSITE NUMBER.";
            }
        }
    }
    else
    {
        cout << "\nTHE ENTERED NUMBER SHOULD BE A NATURAL NUMBER.";
    }

    goto repeat;
    
    return 0;
}