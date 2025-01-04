#include<iostream>
using namespace std;
int main()
{
  long int n,i,r,q,s=0;
  cout<<"\nEnter a number:\n";
  cin>>n;
  int rem;
  int div=n;
  long int count=1;
  int j;
  for(j=1;div!=0;j++)
  {
    rem = div % 10;
    div=div/10;
    count=count*10;   //This loop is only for counting the no. of digits in the number and set count accordingly.
  }
  q=n;
  for(i=1;q!=0;i++)
  {
    r=q%10;
    q=q/10;
    count=count/10;
    s=r*count+s;
  }
  if(s==n)
  {
    cout<<n<<" is a palindrome number.";
  }
  else
  {
    cout<<n<<" is not a palindrome number.";
  }
  return 0;
}