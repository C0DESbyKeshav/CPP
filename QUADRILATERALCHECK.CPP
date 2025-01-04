#include<iostream>
using namespace std;
 int main()
 {
 cout<<"\n\nENTER ANY 4 ANGLES TO CHECK WHETHER IT IS A QUADRILATERAL OR NOT:\n\n";
 long double a,b,c,d;
 cin>>a;
 cin>>b;
 cin>>c;
 cin>>d;
 if(a+b+c+d==360) //sum of all angles of a quadrilateral is 360 degrees.
 {
  cout<<"\nIT IS A QUADRILATERAL.";
 }
 else
 {
  cout<<"\nIT IS NOT A QUADRILATERAL.";
 }
 return 0;
 }