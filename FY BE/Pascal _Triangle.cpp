#include <iostream>
#include <string>
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

    int coeff[(2 * n) + 1];
    int ap = 0, bp = n;
    cout << endl
         << "(a+b)^(" << n << ") = ";
    for (int j = 2 * n; j >= 0; j--)
    {
        if (j % 2 != 0)
        {
            continue;
        }
        else
        {
            coeff[j] = triangle[n][j];
        }
        if (j == 0)
        {
            cout << coeff[j] << "(a)^(" << bp << ")." << "(b)^(" << ap << ")";
        }
        else
        {
            cout << coeff[j] << "(a)^(" << bp << ")." << "(b)^(" << ap << ")  +  ";
        }
        ap++;
        bp--;
    }
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