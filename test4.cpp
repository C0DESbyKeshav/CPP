#include <iostream>
using namespace std;

int main()
{
    int limit, k;
    cout << "Enter the limit: ";
    cin >> limit;
    k = limit - 1;

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < (((limit * 2) - 1) + (2 * i)); j++)
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

    return 0;
}