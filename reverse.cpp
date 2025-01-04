#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[1000];
    int l;
    cout<<"Enter string:\n";
    cin.getline(a,1000);
    l=strlen(a);
    cout<<"\nReverse of the string=\n";
    for(int i=l;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}