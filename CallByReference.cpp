#include <iostream>
using namespace std;

int swap(int *x,int *y) //Here * is used to define that variable x and y are pointers
{
  int temp;
  temp=*x; //value of pointer x in integer temp
  *x=*y;   //value of pointer y in pointer x
  *y=temp; //value of integer temp in pointer y  
  return 0;
}

int main()
{
    int x,y;
    cout<<"Before swapping:\n";
    x=100;
    y=20;
    cout<<"x= "<<x<<"\ny= "<<y;
    swap(x,y);                       //here, swap(x,y) and swap(&x,&y) is one and the same
                                     //when these value of x and y goes to the argument/parameter of function defined at line 4,
                                     //then the expression looks like *x=x or *x=&x  and  *y=y or *y=&y
    cout<<"\nAfter swapping:";
    cout<<"\nx= "<<x<<"\ny= "<<y;
    return 0;
}