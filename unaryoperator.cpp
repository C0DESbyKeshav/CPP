#include<iostream>
using namespace std;

class unary
{
    int x,y,z;
    public:
      int getdata();
      int display();
      int operator-();  //the name of this function has to be 'operator' with an operator sign
};

int unary::getdata()
{
    cout<<"\nEnter three numbers:\n";
    cin>>x>>y>>z;
    return 0;
}

int unary::operator-()
{
    x=-x;
    y=-y;
    z=-z;
    return 0;
}

int unary::display()
{
    cout<<"\nx= "<<x;
    cout<<"\ny= "<<y;
    cout<<"\nz= "<<z<<"\n";
    return 0;
}

int main()
{
    unary u;  //object 'u' declared.
    u.getdata();
    cout<<"\n\nBefore calling operator-() :";
    u.display();
    cout<<"\nAfter calling operator-() :";
    u.operator-();  //operator-() is called.
    u.display();
    return 0;
}