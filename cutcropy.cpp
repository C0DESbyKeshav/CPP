#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char crop[100],paste[100],left[90],right[90];
    int lower,higher,l,m;
    cout<<"Enter the sentence:\n";
    cin.getline(crop,100);
    cout<<"\n\nEnter the sentence that you want to paste in between:\n";
    cin.getline(paste,100);
    l=strlen(crop);
    for(int i=0;i<l;i++)
    {
        cout<<crop[i]<<"  ";
    }
    cout<<"\n";
    for(int i=0;i<l;i++)
    {
        if(i<10)
        {
            cout<<i<<"  ";
        }
        else
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n\nEnter the limit:\n";
    cout<<"lower limit= ";
    cin>>lower;
    cout<<"higher limit= ";
    cin>>higher;
    cout<<"\n\nYour cropped sentence:\n";
    if(higher>lower && lower>=0)
    {
        for(int i=0;i<l;i++)
        {
            if(i>=lower && i<=higher)
            {
            }
            else
            {
                cout<<crop[i];
            }
            if(i<lower)
            {
                left[i]=crop[i];
            }
            if(i>higher)
            {
                right[i]=crop[i];
            }
        }
        m=strlen(paste);
        cout<<"\n\nYour complete sentence is:\n";
        for(int i=0;i<lower;i++)     
        {
            cout<<left[i];
        }       
        for(int i=0;i<m;i++)
        {
            cout<<paste[i];
        } 
        for(int i=higher+1;i<l;i++)
        {
            cout<<right[i];
        }                                                                                                                                                
    }
    else
    {
        cout<<"\nEnter appropriate limits.";
    }

    return 0;
}