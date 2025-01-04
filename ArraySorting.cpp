#include <iostream>
using namespace std;
int main()
{
   int a[5],temp=0;
   cout<<"Enter 5 array elements: \n";
   for(int i=0;i<5;i++)
   {
     cin>>a[i];
   }
   
   for(int j=0;j<5;j++)
   {
     for(int k=0;k<5;k++)
     {
       if(a[j]<a[k])
       {
         temp=a[j];
         a[j]=a[k];
         a[k]=temp;
       }
     }
    }
     cout<<"Sorted array: ";
     for(int l=0;l<5;l++)
     {
       cout<<a[l]<<" ";
     }
     return 0;
   } 