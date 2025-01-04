#include<iostream>
using namespace std;
 int main()
 {

 int num,rem,div,sum=0,i;
 cout<<"\n\nEnter a number:\n\n";
 cin>>num;
 div=num;

 for(i=1;div!=0;i++)
 {
  rem=div%10;
  sum=sum+rem*rem*rem;
  div=div/10;
 }

 if(num==sum)
 {
  cout<<"\n"<<num<<" is an armstrong number."; //Eg. of ARMSTRONG NO.: 0, 1, 153, 370, 371, 407
 }
 else
 {
  cout<<"\n"<<num<<" is not an armstrong number.";
 }

 return 0;
 }