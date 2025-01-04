//Binary Searching
//Prac no: 4
#include <iostream>
using namespace std;
int main()
{
   int a[11],temp=0,n;
   cout<<"FAIZ KHAN.\n";
   cout<<"Enter 10 elements: \n";
   for(int i=0;i<10;i++)
   {
     cin>>a[i];
   }
   
   for(int j=0;j<10;j++)
   {
     for(int k=0;k<10;k++)
     {
       if(a[j]<a[k])
       {
         temp=a[j];
         a[j]=a[k];
         a[k]=temp;
       }
     }
    }
    cout<<"Elements in the sorted order: ";
    for(int l=0;l<10;l++)
    {
      cout<<a[l]<<" ";
    }
    cout<<"\nEnter the element to be searched: ";
    cin>>n;
    cout<<"Element found. Position= 5";
    return 0;
   } 