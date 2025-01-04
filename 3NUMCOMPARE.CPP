#include<iostream>
using namespace std;
  int main()
 {
 cout<<"\n\nENTER THREE INTEGERS FOR COMPARISON:\n\n";
 long double a,b,c;
 cout<<"a= ";
 cin>>a;
 cout<<"b= ";
 cin>>b;
 cout<<"c= ";
 cin>>c;

 if(a>b && a>c)
 {
  cout<<"\n"<<a<<" IS THE BIGGEST NUMBER.";
 }
 else
 {
  if(b>a && b>c)
  {
   cout<<"\n"<<b<<" IS THE BIGGEST NUMBER.";
  }
  else
  {
   if(c>a && c>b)
   {
    cout<<"\n"<<c<<" IS THE BIGGEST NUMBER.";
   }
   else
   {
    cout<<"";
   }
  }
 }

 if(a<b && a<c)
 {
  cout<<"\n"<<a<<" IS THE SMALLEST NUMBER.";
 }
 else
 {
  if(b<a && b<c)
  {
   cout<<"\n"<<b<<" IS THE SMALLEST NUMBER.";
  }
  else
  {
   if(c<a && c<b)
   {
    cout<<"\n"<<c<<" IS THE SMALLEST NUMBER.";
   }
   else
   {
    cout<<"";
   }
  }
 }

 if(a==b && b==c)
 {
  cout<<"\na, b & c HAVE EQUAL VALUES.";
 }
 else
 {
  if(a==b)
  {
   cout<<"\na & b HAVE EQUAL VALUES.";
  }
  else
  {
   if(a==c)
   {
    cout<<"\na & c HAVE EQUAL VALUES.";
   }
   else
   {
    if(b==c)
    {
     cout<<"\nb & c HAVE EQUAL VALUES.";
    }
    else
    {
     cout<<"";
    }
   }
  }
 }
 return 0;
 }