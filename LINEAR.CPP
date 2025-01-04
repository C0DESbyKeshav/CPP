#include<iostream>
using namespace std;
 int main()
 {
  int ans,i,j,a[100],n;

  cout<<"\n\nEnter 5 numbers:\n\n";

  for(i=1;i<=5;i++)
  {
   cin>>a[i];
  }

  cout<<"\n\nEnter a number:\n\n";
  cin>>n;

  for(i=1;i<=5;i++)
  {
   if(a[i]==n)
   {
    ans=a[i];
    j=i;
   }
  }

  if(ans==n)
   {
    cout<<"\n"<<n<<" is there in the list at position "<<j<<".";
   }
   else
   {
    cout<<"\n"<<n<<" is not there in the list.";
   }

  return 0;
  }