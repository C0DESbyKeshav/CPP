#include<iostream>
using namespace std;

 int compare(long double a,long double b,long double c)
 {
  if(a>b)
  {
   if(a>c)
   {
    cout<<a<<" is the biggest number.";
   }
   else
   {
    cout<<c<<" is the biggest number.";
   }
  }
  else
  {
   if(b>c)
   {
    cout<<b<<" is the biggest number.";
   }
   else
   {
    cout<<c<<" is the biggest number.";
   }
  }
  return 0;
 }

 int main()
 {
 long double m,n,o;
 cout<<"ENTER THREE NUMBERS:\n";
 cin>>m>>n>>o;
 compare(m,n,o);
 return 0;
 }

