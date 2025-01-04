//Arrangement of the sentences in 3 different formats

/* 65 to 90 =>  A to Z   
   97 to 122 => a to z */
#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;
int main()
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    char sent[1000],temp;
    int len;
    cout<<"\nEnter a sentence:\n";
    cin.getline(sent,1000);
    len=strlen(sent);

    cout<<"\nThe well arranged sentences are in 3 formats as per your need:\n\n";

    
    SetConsoleTextAttribute(h,1);     //blue

    //All capital  
    for(int i=0;i<len;i++)
    {
        if(sent[i]>=97&sent[i]<=122)   //if small
        {
            temp=sent[i];
            temp=temp-32;
            cout<<temp;
        }
        else
        {
            cout<<sent[i];
        }
    }

    cout<<"\n";
    SetConsoleTextAttribute(h,2);     //green

    //All small
    for(int i=0;i<len;i++)
    {
        if(sent[i]>=65&sent[i]<=90)   //if capital
        {
            temp=sent[i];
            temp=temp+32;
            cout<<temp;
        }
        else
        {
            cout<<sent[i];
        }
    }
    
    cout<<"\n";
    SetConsoleTextAttribute(h,4);     //red

    //Recommended
    for(int i=0;i<len;i++)
    {
        int j;
        if(sent[i]==' '||sent[i]=='.')
        {
            j=i;
            j++;
        }
        if(i==0||i==j)
        {
            if(sent[i]>=97&sent[i]<=122)   //if small
            {
                temp=sent[i];
                temp=temp-32;
                cout<<temp;
            }
            else
            {
                cout<<sent[i];
            }
        }
        else
        {
            if(sent[i]>=65&sent[i]<=90)   //if capital
            {
                temp=sent[i];
                temp=temp+32;
                cout<<temp;
            }
            else
            {
                cout<<sent[i];
            }
        }
    }

    SetConsoleTextAttribute(h,7);     //white
    cout<<"\n\n";
    
    return 0;
}