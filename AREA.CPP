#include<iostream>
using namespace std;

 int area(long double length,long double breadth)
 {
   long double Rectangle;
   Rectangle= length * breadth;
   cout<<"\nThe area of rectangle= "<<Rectangle<<" sq.units.";
   return 0;
 }

 int area(long double radius)
 {
   long double Circle;
   Circle= 3.14 * (radius*radius);
   cout<<"\nThe area of circle= "<<Circle<<" sq.units.";
   return 0;
 }

 int main()
 {
  
  long double l,b,r;
  cout<<"\n\nEnter two values:\n\n";
  cout<<"length= ";
  cin>>l;
  cout<<"breadth= ";
  cin>>b;
  area(l,b);

  cout<<"\n\n\nEnter a value:\n\n";
  cout<<"radius= ";
  cin>>r;
  area(r);
  return 0;
 }