#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"ENTER TWO NUMBERS TO SWAP:\n";
cout<<"a=";
cin>>a;
cout<<"b=";
cin>>b;
c=a;
a=b;
b=c;
cout<<"AFTER SWAPPING:\n";
cout<<"a="<<a;
cout<<"\n""b="<<b;
return 0;
}