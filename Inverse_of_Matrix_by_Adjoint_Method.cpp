#include <iostream>
using namespace std;

int main()
{
start:
  int i, j, n, D;

  cout << "Enter '2' to find the inverse of 2x2 matrix";
  cout << "\nEnter '3' to find the inverse of 3x3 matrix\n";
  cin >> n;

  switch (n)
  {

  case 2:
  {

    int a[2][2];
    cout << "\n\nEnter the elements of the matrix:\n";
    for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= n; j++)
      {
        cin >> a[i][j];
      }
    }

    cout << "\nLet A= " << a[1][1] << "  " << a[1][2] << "\n";
    cout << " \t" << a[2][1] << "  " << a[2][2] << "\n\n";
    cout << "|A|= [(" << a[2][2] << ")(" << a[1][1] << ")] - [(" << a[2][1] << ")(" << a[1][2] << ")]\n";
    cout << "\t\t= (" << a[2][2] * a[1][1] << ") - (" << a[2][1] * a[1][2] << ")\n";
    D = ((a[2][2]) * (a[1][1])) - ((a[2][1]) * (a[1][2]));
    cout << "|A|= " << D << "\n\n";

    if (D == 0)
    {
      cout << "Since, |A|= 0\n";
      cout << "So, A is a singular matrix.\n";
      cout << "So, A' doesn't exists.\n\n";
      goto start;
    }
    else
    {
      cout << "Since, |A| is not equal to 0\n";
      cout << "So, A is a non singular matrix.\n";
      cout << "So, A' exists.\n\n";
    }
    cout << "Minors:\n";
    cout << "M11= " << a[2][2] << "\n";
    cout << "M12= " << a[2][1] << "\n";
    cout << "M21= " << a[1][2] << "\n";
    cout << "M22= " << a[1][1] << "\n\n";

    cout << "Cofactor Aij= [(-1)^(i+j)] * Mij\n";
    cout << "A11= " << a[2][2] << "\n";
    cout << "A12= " << -a[2][1] << "\n";
    cout << "A21= " << -a[1][2] << "\n";
    cout << "A22= " << a[1][1] << "\n\n";

    cout << "So, Cofactor matrix of Aij= " << a[2][2] << "  " << -a[2][1] << "\n";
    cout << "\t\t\t" << -a[1][2] << "  " << a[1][1] << "\n\n";

    cout << "Since, adj.A= Transpose of cofactor matrix of Aij\n";
    cout << "adj.A= " << a[2][2] << "  " << -a[1][2] << "\n";
    cout << "\t\t" << -a[2][1] << "  " << a[1][1] << "\n\n";

    cout << "Since, A'= (1/|A|) * adj.A\n";

    cout << "So, A'= (1/" << D << ") * " << a[2][2] << "  " << -a[1][2] << "\n";
    cout << "\t\t" << -a[2][1] << "  " << a[1][1] << "\n\n";

    break;
  }

  case 3:
  {
    cout << "\nNot yet coded\n";
  }
  }
}