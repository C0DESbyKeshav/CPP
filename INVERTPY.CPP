#include<iostream>
using namespace std;
 int main()
 {
 long double n,i,j;
 cout<<"\nENTER A LIMIT FOR PYRAMID:\n";
 cin>>n;
 for(i=0;i<=n;i++)
 {
  cout<<"\n";
  for(j=0;j<=n;j++)
  {
   if(j<=i)
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