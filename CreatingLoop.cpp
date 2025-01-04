#include<iostream>
using namespace std;
int main()
{
  int n,i=1;
  cout<<"Enter a number:\n";
  cin>>n;
  loop:
  {
    cout<<i<<". Hii\n";
    i++;
  }
  if(i<=n)
  {
    goto loop;
  }
  return 0;
}  