#include<iostream>
using namespace std;

int add(int a,int b)
{
   int c;
   c=a+b;
   cout<<"Addition of "<<a<<" and "<<b<<" is "<<c<<"\n";
   return c;
}

int sub(int a,int b)
{
   int c;
   c=a-b;
   cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<c<<"\n";
   return c;
}

int mul(int a,int b)
{
   int c;
   c=a*b;
   cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<c<<"\n";
   return c;
}

int div(float a,float b)
{
   float c;
   c=a/b;
   cout<<"Division of "<<a<<" and "<<b<<" is "<<c<<"\n";
   return c;
}

int main()
{
    float m,n;
    cout<<"Enter two numbers:\n";
    cin>>m>>n;
    add(m,n);
    sub(m,n);
    mul(m,n);
    div(m,n);
    return 0;
}