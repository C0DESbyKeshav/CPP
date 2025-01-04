#include <iostream>
using namespace std;
int main()
{
   int start,end,evensum=0,oddsum=0,i;
   cout<<"Enter starting number :";
   cin>>start;
   end=start + 100;
   for(i=start;i<=end;i++)
   {
     evensum=evensum+i;
     oddsum=oddsum+i;
    }
     if(i%2==0)
     {
       cout<<"Total="<<evensum<<"\n";
     }
     else
     {
       cout<<"Total="<<oddsum<<"\n";
     }     
 }