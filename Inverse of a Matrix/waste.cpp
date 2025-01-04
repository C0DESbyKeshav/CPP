//// DESTRUCTOR
// #include <iostream>
// using namespace std;
//
// class account{
//   private :
//     float balance;
//     float rate;
//     public:
//       account();
//       ~account();
//       void deposit();
//       void withdraw();
//       void compound();
//       void getbalance();
//       void menu();
//       };
//       account::account(){
//         cout<<"\nEnter initial balance:\n";
//         cin>>balance;
//         cout<<"\nEnter Rate of Interest\n";
//         cin>>rate;
//       }
//       account::~account(){
//         cout<<"\nData has been deleted\n";
//       }
//       void account::deposit(){
//         float amount;
//         cout<<"\nEnter amount:\n";
//         cin>>amount;
//         balance=balance+amount;
//         cout<<"\nCurrent Balance= "<<balance;
//       }
//   void account::withdraw(){
//     float amount;
//     cout<<"\nHow much you want to withdraw:\n";
//     cin>>amount;
//     if(amount<=balance){
//       balance=balance-amount;
//       cout<<"\nAmount withdrawn= "<<amount;
//       cout<<"\nRemaining balance= "<<balance;
//       }
//       else
//       cout<<"\nLess account balance.\n";
//   }
//   void account:: compound(){
//     float interest;
//     interest=balance*rate;
//     balance=balance+interest;
//     cout<<"\nInterest amount= "<<interest;
//     cout<<"\nCurrent balance= "<<balance;
//   }
//   void account::getbalance(){
//     cout<<"\nCurrent Balance= "<<balance;
//   }
//       void account:: menu(){
//         cout<<"d-> deposit"<<endl;
//         cout<<"w-> withdraw"<<endl;
//         cout<<"c->compound interest"<<endl;
//         cout<<"g->get balance"<<endl;
//         cout<<"q->quit";
//         cout<<"\nOption please?";
// }
//
// int main()
//{
//   class account ac;
//   char ch;
//   ac.menu();
//   while((ch=getchar())!='q'){
//     switch(ch){
//       case 'd':
//       ac.deposit();
//       break;
//       case 'w':
//         ac.withdraw();
//         break;
//       case 'c':
//         ac.compound();
//         break;
//       case 'g':
//         ac.getbalance();
//         break;
//     }
//   }    //By default, destructor gets called automatically before return 0 even if its not called.
//   return 0;
// }

////Friend function
// #include <iostream>
// using namespace std;
//
// class factorial
//{
// private:
//   int fact = 1, n;
//
// public:
//   factorial()
//   {
//     cout << "enter the number" << endl;
//     cin >> n;
//   }
//   friend void cal();
//   ~factorial()
//   {
//     cout << "factorial = " << fact;
//   }
// };
// void cal()
//{
//   for (int i = 1; i <= n; i++)
//   {
//     fact *= i;
//   }
// }
// int main()
//{
//   factorial k;
//   cal();
//
//   return 0;
// }

////Trial - 1
// #include<iostream>
// using namespace std;
// int main()
//{
//     char a=97,b;
//     for(a;a<=122;a++)
//     {
//         b=a;
//         b=b-32;
//         cout<<"\n"<<b;
//     }
//     return 0;
// }

// Trial - 2
#include <iostream>
#include <string.h>
#include "short.h"
using namespace std;

int main()
{

  // ALL DEFINITIONS & DECLARATIONS
  char a11[10], a12[10], a13[10], a21[10], a22[10], a23[10], a31[10], a32[10], a33[10];
  //****char arr={a11[10], a12[10], a13[10], a21[10], a22[10], a23[10], a31[10], a32[10], a33[10]}
  // int n;
  cout << "\n\nSolving Inverse of a Matrix using Row Transformation";
  cout << "\nNOTE: Inverse of a matrix can be found only if that matrix is a square matrix";
  // cout<<"\n\nEnter '2' for 2x2 matrix or \nEnter '3' for 3x3 matrix.\n";
  // cin>>n;

  cout << "\n\nEnter 9 elements:\n";
  cin.getline(a11, 10);
  cin.getline(a12, 10);
  cin.getline(a13, 10);
  cin.getline(a21, 10);
  cin.getline(a22, 10);
  cin.getline(a23, 10);
  cin.getline(a31, 10);
  cin.getline(a32, 10);
  cin.getline(a33, 10);
  int len11 = strlen(a11), len12 = strlen(a12), len13 = strlen(a13), len21 = strlen(a21), len22 = strlen(a22), len23 = strlen(a23), len31 = strlen(a31), len32 = strlen(a32), len33 = strlen(a33);
  int elen[9] = {len11, len12, len13, len21, len22, len23, len31, len32, len33}; // elen stands for LENGTH of all the individual ELEMENTS i.e elements+length=elen
  // int gth11=len11, gth12=len12, gth13=len13, gth21=len21, gth22=len22, gth23=len23, gth31=len31, gth32=len32, gth33=len33;
  // int cpy[9]={gth11, gth12, gth13, gth21, gth22, gth23, gth31, gth32, gth33};
  int a[3][3];
  int I11, I12, I13, I21, I22, I23, I31, I32, I33;
  int big, swap, j, k, p, q, r, DA;
  // cout<<"\n";

  // LONGEST CHARACTER
  Short sl;
  big = sl.LongCh(elen, a11, a12, a13, a21, a22, a23, a31, a32, a33, len11, len12, len13, len21, len22, len23, len31, len32, len33, swap, big);

  // CHAR PRINT
  Short spA;
  spA.PrintA(a11, a12, a13, a21, a22, a23, a31, a32, a33, len11, len12, len13, len21, len22, len23, len31, len32, len33, big);

  // CHAR to INT
  Short sc;
  sc.CharToInt(a11, a12, a13, a21, a22, a23, a31, a32, a33, len11, len12, len13, len21, len22, len23, len31, len32, len33, a, j, k);

  // DETERMINANT of MATRIX- A
  p = (a[2][2] * a[3][3]) - (a[3][2] * a[2][3]);
  q = (a[2][1] * a[3][3]) - (a[3][1] * a[2][3]);
  r = (a[2][1] * a[3][2]) - (a[3][1] * a[2][2]);
  DA = (a[1][1] * p) - (a[1][2] * q) + (a[1][3] * r);

  cout << "\n\nSo, |A|= " << a[1][1] << "[(" << a[2][2] << "x" << a[3][3] << ")-(" << a[3][2] << "x" << a[2][3] << ")] - (" << a[1][2] << ")[(" << a[2][1] << "x" << a[3][3] << ")-(" << a[3][1] << "x" << a[2][3] << ")] + (" << a[1][3] << ")[(" << a[2][1] << "x" << a[3][2] << ")-(" << a[3][1] << "x" << a[2][2] << ")]\n";
  cout << "       = " << a[1][1] << "(" << p << ") - [(" << a[1][2] << ")x(" << q << ")] + [(" << a[1][3] << ")x(" << r << ")]\n";
  cout << "So, |A|= " << DA;

  if (DA == 0)
  {
    cout << "\n\nSince, |A| is equal to 0";
    cout << "\n   So, |A| is a singular matrix.";
    cout << "\n   So,  A' does not exists.";
    cout << "\n   So, As provided, We can't find the inverse of matrix A.\n\n";
    goto end;
  }
  else
  {
    cout << "\n\nSince, |A| is not equal to 0";
    cout << "\n   So, |A| is a non singular matrix.";
    cout << "\n   So,  A' does exists.";
  }

  I11 = 1;
  I12 = 0;
  I13 = 0;
  I21 = 0;
  I22 = 1;
  I23 = 0;
  I31 = 0;
  I32 = 0;
  I33 = 1;

  cout << "\n\nConsider AxA'=I\n";
  cout << "So,\n";

  // PERFECT CONCEPTUAL CHAR PRINT
  Short spAI;
  spAI.PrintAI(a11, a12, a13, a21, a22, a23, a31, a32, a33, I11, I12, I13, I21, I22, I23, I31, I32, I33, big);

  // Mathematical Logic
  // for (int i = 0; a[1][1] != 1; i++)
  //{
  if (a[2][1] == 1)
  {
    cout << "\n\nR1 <-> R2";
    Short ss;
    ss.Swap(a, swap, I11, I12, I13, I21, I22, I23, I31, I32, I33);

    spAI.PrintAI(a11, a12, a13, a21, a22, a23, a31, a32, a33, I11, I12, I13, I21, I22, I23, I31, I32, I33, big);

    //** INT to CHAR {[(FoR InT To cHaR- refer to test.cpp file)]}
    // Short si;
    // si.IntToChar(elen, a11, a12, a13, a21, a22, a23, a31, a32, a33, len11, len12, len13, len21, len22, len23, len31, len32, len33, a, I11, I12, I13, I21, I22, I23, I31, I32, I33, j, k, p, q, r, swap, big);

    //**THE PROBLEM IS THERE IN THE INT TO CHAR CONVERSION LOGIC AND METHOD. MINUS SIGN WAALA IS INCORRECT AND EVEN FOR THE 2 OR 3 DIGITS POSITIVE NUMBERS.

    // LONGEST CHARACTER
    // big = sl.LongCh(elen, a11, a12, a13, a21, a22, a23, a31, a32, a33, len11, len12, len13, len21, len22, len23, len31, len32, len33, swap, big);

    // PERFECT CONCEPTUAL CHAR PRINT
    // big = spAI.PrintAI(a11, a12, a13, a21, a22, a23, a31, a32, a33, I11, I12, I13, I21, I22, I23, I31, I32, I33, big);
  }
  else
  {
    // if()
    //{
    //
    // }
  }
  //}

end:
  cout << "\n\n";
  return 0;
}