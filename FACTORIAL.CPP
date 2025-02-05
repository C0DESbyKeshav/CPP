#include <iostream>
using namespace std;
int main()
{
start:
   cout << "\n\nENTER A POSITIVE INTEGER:\n\n";
   long double m, n, i;
   cin >> n;
   cout << "\n"
        << "THE FACTORIAL OF " << n << " = ";
   m = n - 1;
   for (i = 1; i <= m; i++)
   {
      n = n * i;
   }
   cout << n;
   goto start;
   return 0;
}