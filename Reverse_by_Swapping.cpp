#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char reverse[1000],swap;
    int l;
    cout<<"Enter a sentence:\n";
    cin.getline(reverse,1000);
    l=strlen(reverse);
    cout<<"\nThe reversed sentence is:\n";
    for(int i=0;i<l/2;i++)
    {
        swap=reverse[i];
        reverse[i]=reverse[(l-1)-i];
        reverse[(l-1)-i]=swap;
    }
    for(int i=0;i<=l;i++)
    {
        cout<<reverse[i];
    }
    return 0;
}