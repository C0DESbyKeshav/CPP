#include<iostream>
using namespace std;
int main()
{
    int a[5],beg=0,end=4,mid,swap,item;

    start:

    cout<<"\nEnter 5 elements:\n";

    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i]<a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
    }

    cout<<"\n\nThe sorted array is: ";

    for(int i=0;i<5;i++)
    {
        cout<<" "<<a[i];
    }

    cout<<"\n\nEnter a number to be searched: ";
    cin>>item;

    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(item==a[mid])
        {
            cout<<"Element found at "<<mid;
            break;
        }    
        else
        {
            cout<<"Element not found";
            break;
        }
        if(item<a[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
    }
    goto start;
    return 0;
}