#include<iostream>
using namespace std;
 int main()
 {
  long double n,a,b,c,i;

  cout<<"\n\nEnter first two values:\n\n";
  cout<<"a= ";
  cin>>a;
  cout<<"b= ";
  cin>>b;

  cout<<"\n\nENTER A LIMIT FOR FIBONACCI SERIES:\n\n";
  cin>>n;
  cout<<"\nTHE FIBONACCI SERIES OBTAINED = "<<a<<", "<<b;

  for(i=3;i<=n;i++)
  {
   c=a+b;
   cout<<", "<<c;
   a=b;
   b=c;
  }

  return 0;
 }