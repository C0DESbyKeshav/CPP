//prac no:12
#include<iostream>
using namespace std;
int main()
{
    float a[6]={10.2,3.9,4.6,5.5,6.9};
    float *ptr,sum=0;
    ptr=a;
    cout<<"FAIZ KHAN.\n";
    cout<<"Starting address\tsize\tending address\tvalue of sum";
    for(int i=0;i<5;i++)
    {
        sum=sum+*ptr;
        cout<<"\n"<<ptr<<"\t\t"<<sizeof(*ptr)<<"\t";
        ptr=ptr+1;
        cout<<ptr<<"\t\t"<<sum;
    }
}