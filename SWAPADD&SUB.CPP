#include<iostream>
using namespace std;
int main()
 {
 int a,b;
 cout<<"ENTER TWO NUMBERS:\n";
 cout<<"a= ";
 cin>>a;
 cout<<"b= ";
 cin>>b;
 a=a-b;
 b=a+b;
 a=b-a;
 cout<<"AFTER SWAPPING:\n""a= "<<a<<"\nb= "<<b;
 return 0;
 }