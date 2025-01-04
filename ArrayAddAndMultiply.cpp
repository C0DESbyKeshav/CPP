#include <iostream>
using namespace std;
int main()
{
   int arr[5],sum=0,product=1;
   cout<<"Enter 5 array elements: \n";
   for(int i=0;i<5;i++)
   {
     cin>>arr[i];
   }
   cout<<"\n\nElements of array are: ";
   for(int j=0;j<5;j++)
   {
     sum=sum+arr[j];
     product=product*arr[j];
     cout<<arr[j]<<" ";
   }
   cout<<"\n\nSum="<<sum;
   cout<<"\n\nProduct="<<product;
   return 0;
}