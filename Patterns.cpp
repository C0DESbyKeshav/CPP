#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    int i, j, k, l, m, n, o, p, q;
    cout << "Enter any no. b/w 0 to 9 for the limit:\n";
    cin >> n;

    cout << "\n";

    // GigantName.
    // K
    m = (n * 2) - 1;
    o = m - n;
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if ((j == n - i || j == 0) || (i >= n && j > 1 && j == (i + 1) - (m - n)))
            {
                SetConsoleTextAttribute(h, 11); // Light Aqua
                cout << " K";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    // E
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || i == 1 || i == m || i == n)
            {
                cout << " E";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    // S
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 && j > 1 || i == n && j > 1 && j < n || i == m && j < n || i > 1 && i < n && j == 1 || i > n && i < m && j == n)
            {
                cout << " S";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    // H
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (j == 1 || i == n || j == m)
            {
                cout << " H";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    // A
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i >= n && (j == 1 || j == m) || i == n + 1 || i == 1 && j == n || i > 1 && i < n && (j == n - i || j == n + i))
            {
                cout << " A";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    // V
    p = 2;
    q = m - 1;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i <= n && (j == 1 || j == m) || i == m && j == n || i > n && i < m && (j == p || j == q))
            {
                cout << " V";
            }
            else
            {
                cout << "  ";
            }
        }
        if (i > n && i < m)
        {
            p++;
            q--;
        }
        cout << "\n";
    }

    cout << "\n";

    SetConsoleTextAttribute(h, 2); // Green
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        char a = 'A';
        for (j = 1; j <= i; j++)
        {
            cout << a++ << " "; // Here a++ is a post increment operator. So, 1st time it will print the value of a and after that it will start incrementing the ASCII value of A by 1.
        } // Extra info: There is even ++a operator which increments the value first and then it prints its another incrementations
        cout << "\n";
    }

    cout << "\n";

    char a = 'A';
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << a++ << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << "  ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << "  ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << "  ";
        }
        for (k = i; k > 0; k--)
        {
            cout << k << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << "  ";
        }
        for (k = i; k > 0; k--)
        {
            if (k % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << "  ";
        }
        for (k = i; k > 0; k--)
        {
            if (k % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    l = n;
    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << "  ";
        }
        for (k = l; k < n + 1; k++)
        {
            cout << k << " ";
        }
        l--;
        cout << "\n";
    }

    cout << "\n";

    k = (n * 2) - 1;
    for (i = 1; i <= (n * 2) - 1; i++)
    {
        for (j = 1; j <= (n * 2) - 1; j++)
        {
            if (i == j || j == k)
            {
                SetConsoleTextAttribute(h, 11); // Light Aqua
                cout << "X ";
            }
            else
            {
                SetConsoleTextAttribute(h, 2); // Green
                cout << "* ";
            }
        }
        k--;
        cout << "\n";
    }

    cout << "\n";

    SetConsoleTextAttribute(h, 2); // Green

    char b = 'A';
    for (i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            b = b + i;
        }
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << "  ";
        }
        for (k = i; k > 0; k--)
        {
            cout << b << " ";
            if (i > 1)
            {
                b--;
            }
        }
        for (k = i; k > 0; k--)
        {
            if (i > 1)
            {
                b++;
            }
        }
        cout << "\n";
    }

    cout << "\n";

    char d = 'A';
    for (i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            d = d + i;
        }
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << "  ";
        }
        for (k = i; k > 0; k--)
        {
            cout << d << " ";
            d--;
        }
        cout << "\n";
    }

    cout << "\n";

    // Trishul
    k = (n * 2) - 1;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (((j == 1 || j == n || j == k) && i <= n) || i == n || j == n && i > n)
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            if (j % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            if (j % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        char a = 'A';
        for (j = n; j >= i; j--)
        {
            cout << a++ << " "; // Here a++ is a post increment operator. So, 1st time it will print the value of a and after that it will start incrementing the ASCII value of A by 1.
        } // Extra info: There is even ++a operator which increments the value first and then it prints its another incrementations
        cout << "\n";
    }

    cout << "\n";

    char c = 'A';
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            cout << c++ << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k <= n; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";

    m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = m; k >= 1; k--)
        {
            cout << k << " ";
        }
        m--;
        cout << "\n";
    }

    cout << "\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k <= n; k++)
        {
            if (k % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k <= n; k++)
        {
            if (k % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k <= n; k++)
        {
            cout << k << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    char e = 'A';
    m = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k < n - m; k++)
        {
            e++;
        }
        for (int k = 1; k <= n - m; k++)
        {
            cout << e << " ";
            e--;
        }
        e++;
        cout << "\n";
        m++;
    }

    cout << "\n";

    char f = 'A';
    m = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k < n - m; k++)
        {
            f++;
        }
        l = f;
        for (int k = 1; k <= n - m; k++)
        {
            cout << f << " ";
            f--;
        }
        f = l;
        f++;
        cout << "\n";
        m++;
    }

    cout << "\n";

    {
        k = n - 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (((n * 2) - 1) + (2 * i)); j++)
            {
                if (j < (2 * k) || ((j > (2 * k)) && (j % 2 != 0)))
                {
                    cout << " ";
                }
                else
                {
                    cout << "*";
                }
            }
            k--;
            cout << "\n";
        }
    }

    cout << "\n";

    {
        for (int i = 1; i <= n; i++)
        {
            k = 1;
            for (int j = 1; j <= n + (i - 1); j++)
            {
                if (k <= n - i)
                {
                    cout << " ";
                    k++;
                }
                else
                    cout << "*";
            }
            cout << "\n";
        }
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << " ";
        }
        for (k = i; k > 0; k--)
        {
            cout << k << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << " ";
        }
        for (k = i; k > 0; k--)
        {
            if (k % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << " ";
        }
        for (k = i; k > 0; k--)
        {
            if (k % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    l = n;
    for (i = 1; i <= n; i++)
    {
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << " ";
        }
        for (k = l; k < n + 1; k++)
        {
            cout << k << " ";
        }
        l--;
        cout << "\n";
    }

    cout << "\n";

    b = 'A';
    for (i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            b = b + i;
        }
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << " ";
        }
        for (k = i; k > 0; k--)
        {
            cout << b << " ";
            if (i > 1)
            {
                b--;
            }
        }
        for (k = i; k > 0; k--)
        {
            if (i > 1)
            {
                b++;
            }
        }
        cout << "\n";
    }

    cout << "\n";

    d = 'A';
    for (i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            d = d + i;
        }
        m = n - i;
        for (j = m; j > 0; j--)
        {
            cout << " ";
        }
        for (k = i; k > 0; k--)
        {
            cout << d << " ";
            d--;
        }
        cout << "\n";
    }

    cout << "\n";

    // Pascal triangle
    l = 1;
    for (i = n; i >= 1; i--)
    {
        int x = l;
        int y;
        y = m;
        m = (l * 2) - 1;
        for (j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (k = 1; k <= m; k++)
        {
            if (k <= l)
            {
                cout << x << " ";
                x++;
            }
            else
            {
                y++;
                cout << y << " ";
                y--;
                if (l > 1)
                {
                    y--;
                }
            }
        }
        l++;
        cout << "\n";
    }

    cout << "\n";

    for (int i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = n; i >= 1; i--)
    {
        for (k = n; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (j = n; j >= i; j--)
        {
            if (j % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (j = n; j >= i; j--)
        {
            if (j % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (j = n; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << " ";
        }
        char a = 'A';
        for (j = n; j >= i; j--)
        {
            cout << a++ << " "; // Here a++ is a post increment operator. So, 1st time it will print the value of a and after that it will start incrementing the ASCII value of A by 1.
        } // Extra info: There is even ++a operator which increments the value first and then it prints its another incrementations
        cout << "\n";
    }

    cout << "\n";

    c = 'A';
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (j = n; j >= i; j--)
        {
            cout << c++ << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    // Kaju Katli
    SetConsoleTextAttribute(h, 5);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    SetConsoleTextAttribute(h, 3);
    cout << "Kaju katli.\nHAPPY DIWALI..!!\n\n";
    SetConsoleTextAttribute(h, 2);

    cout << "\n";

    return (0);
}