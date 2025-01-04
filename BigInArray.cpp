#include <iostream>
using namespace std;
int main()
{
    int arr[5],large=0;
    cout<<"Enter 5 array elements: ";
    for(int i=0;i<5;i++)
    {
      cin>>arr[i];
    }
    for(int j=0;j<5;j++)
    {
      if(arr[j]>large)
      {
        large=arr[j];
      }
    }
    cout<<"Largest number= "<<large;
}