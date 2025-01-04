// Factorial
/*
#include <iostream>
using namespace std;
int main()
{
    int n, fact;
    cout << "Enter a number:\n";
    cin >> n;
    fact = n;
    for (int i = 1; i < n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " = " << fact;
}
*/

// Fibonacci series
/*
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, sum;
    cout << "The fibonacci series is " << a << " , " << b << " , ";
    for (int i = 0; i < 13; i++)
    {
        sum = a + b;
        cout << sum << " , ";
        a = b;
        b = sum;
    }
}
*/

// Print 10 numbers by using pointers
/*
#include <iostream>
using namespace std;
int main()
{
    int a[10], *ptr;
    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    ptr = &a[0];
    for (int i = 0; i < 10; i++)
    {
        cout << "\n"
             << *ptr;
        ptr++;
    }
}
*/

// Friend Function
/*
#include <iostream>
using namespace std;
class GirlsGroup
{
private:
    int crush;

public:
    GirlsGroup()
    {
        crush = 1000;
    }
    friend void boy(GirlsGroup);
};
void boy(GirlsGroup g1)
{
    cout << g1.crush;
}
int main()
{
    GirlsGroup g1;
    boy(g1);
    return 0;
}
*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char ac[3] = {'-', '5', '2'};
    int j = 1, k, ai[3][3], lenac = strlen(ac);
    ai[1][1] = 0;
    for (int i = (lenac - 1); i >= 0; i--)
    {
        if (ac[0] == '-' && i == 0)
        {
            ai[1][1] = -ai[1][1];
        }
        else
        {
            k = ac[i] - 48;                // here, if my ac[i] is = 4 then,
            ai[1][1] = (k * j) + ai[1][1]; // in this line when the char value directly gets converted into int, the value of char will be stored/ calculated
                                           // i.e 4 will be taken as 52 because "char 52" = 4
                                           // so, by subtracting it by a fix value 48, any char value can be converted into the desired int form
                                           // ex., 52-48 = 4 which we wanted.
            j = j * 10;
        }
    }
    cout << "Char to Int " << ai[1][1] << endl;


    int xi = -52, div, rem;
    char xc[10];
    
    
}