#include<iostream>
#include<string.h>
using namespace std;

class Parent
{
    public:

    void Access()               //Overriden function
    {
        cout<<"\nYOU ARE MAD AND NOT MY CREATOR.";
    }
};

class Child: public Parent
{
    public:
    
    void Access()              //Overriden function
    {
        cout<<"\nYOU ARE MY CREATOR. Nice to meet you !!";
    }
};

int main()
{
    int l,count=0;
    char name1[100], org1[6]={'k','e','s','h','a','v'}, org2[6]={'K','E','S','H','A','V'}, org3[6]={'k','E','S','H','A','V'}, org4[6]={'K','e','s','h','a','v'};

    cout<<"\n\nEnter your name:\n";
    cin.getline(name1,100);
    l=strlen(name1);
    
    for(int i=0;i<l;i++)
    {
        if(name1[i]==org1[i])
        {
            count++;
        }
        else if(name1[i]==org2[i])
        {
            count++;
        }
        else if(name1[i]==org3[i])
        {
            count++;
        }
        else if(name1[i]==org4[i])
        {
            count++;
        }
    }

    if(count==6)
    {
        Child c;
        c.Access();        //calls function of class Child
    }
    else
    {
        Parent p;
        p.Access();       //calls function of class Parent
    }

    return 0;
}