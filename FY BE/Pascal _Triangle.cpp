#include <iostream>
#include<string>
#include <io.h>
#include <fcntl.h> // For _O_U16TEXT
using namespace std;

    void binomial_expansion(int n)
    {
        int length = 0;
        for (int i = 1; i <= n + 1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                length = length + 1;
            }
        }
        cout << "Total number of coefficients in the triangle is " << length << endl
             << endl;

         int triangle[n + 1][length];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n + i; j++)
            {
                if (j <= n - 1 - i)
                {
                    cout << "  ";
                }
                else if (n % 2 != 0 && ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) || (n % 2 == 0 && ((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0))))
                {
                    cout << "  ";
                }
                else if ((j == n - i) || (j == n + i))
                {
                    triangle[i][j] = 1;
                    cout << triangle[i][j] << " ";
                }
                else
                {
                    triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j + 1];
                    if (triangle[i][j] > 9)
                    {
                        cout << triangle[i][j];
                    }
                    else
                    {
                        cout << triangle[i][j] << " ";
                    }
                }
            }
            cout << endl;
        }

        // Set the console output mode to handle UTF-16
        _setmode(_fileno(stdout), _O_U16TEXT);

        wchar_t power[10] = {L'⁰', L'¹', L'²', L'³', L'⁴', L'⁵', L'⁶', L'⁷', L'⁸', L'⁹'};
        char var[2]={'a', 'b'};
        //wcout << L"Superscript digits: " << power << endl;
        int coeff[n], endi=n+1, endj=length;
        for (int i = n; i >= 0; i--)
        {
            coeff[i] = triangle[endi][endj];
            endj--;
        }
        wcout<<endl<<L"("<<var[0]<<L"+"<<var[1]<<L")"<<power[n]<<L" = ";
    }
    

int main()
{
    int n;
    cout << "Enter the power of the binomial expansion term:\n";
    cin >> n;

    if (n > 33)
    {
        cout << "AUKAAT MEIN REH.\nJITNA ZAROORAT HAI UTNA HI POWER DAAL." << endl
             << endl;
    }
    else
    {
        binomial_expansion(n);
    }
    return 0;
}