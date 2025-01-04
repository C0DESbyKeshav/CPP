#include<iostream>
using namespace std;
int main()
{
long unsigned int a=0,i,n;
cout<<"ENTER A LIMIT FROM (0 to 10) FOR THE PYRAMID:\n";
cin>>n;
cout<<"\n";
for(i=1;i<=n;i++)
{
if(i==11)
{
 a=(a*10+1)-1410065408;
 cout<<a;
}
else
{
 a=(a*10)+1;
 cout<<a<<"\n";
}
}
return 0;
}