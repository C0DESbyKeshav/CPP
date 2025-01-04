#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int i,j,n,temp;

	cout<<"Enter a range : ";
	cin>>n;
	cout<<"Enter the elements of array : \n";

	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}

	cout<<"\nAscending order : \n";
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<=n-1;i++)
	{
		cout<<a[i]<<"\n";
	}
	cout<<"\n";


	cout<<"\nDescending order : \n";
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
    for(i=0;i<=n-1;i++)
	{
	cout<<a[i]<<"\n";
	}
	cout<<"\n";

    return 0;
}