#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    int l,count=0;
    cout<<"Enter a Sentence that starts with some spaces in starting:\n";
    start:
    cin.getline(a,100);
    for(int i=0;a[i]==' ';i++)
    {
        count++;
    }
    for(int j=0;j<count;j++)
    {
        cout<<" ";
    }
    goto start;
    return 0;
}