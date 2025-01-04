#include<iostream>
using namespace std;
 int main()
 {
 long double n,i,j;
 cout<<"\nENTER A LIMIT FOR PYRAMID:\n";
 cin>>n;
 for(i=1;i<=n;i++)
 {
  cout<<"\n";
  for(j=1;j<=n;j++)
  {
   if(j<=n-i)
   {
    cout<<" ";
   }
   else
   {
   cout<<"* ";
   }
  }
 }
 return 0;
 }
