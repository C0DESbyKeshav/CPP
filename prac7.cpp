//prac no: 11
#include<iostream>
using namespace std;
 int main()
 {
    cout<<"FAIZ KHAN.\n";
    cout<<"Enter a real and imaginary parts of a complex number\n";
    int r1,im1;
    cin>>r1>>im1;
    cout<<"The complex number is: "<<r1<<" + "<<im1<<"i";
    cout<<"\nEnter a real and imaginary parts of a complex number\n";
    int r2,im2;
    cin>>r2>>im2;
    cout<<"The complex number is: "<<r2<<" + "<<im2<<"i";
    int c1,c2;
    c1=r1+r2;
    c2=im1+im2;
    cout<<"\nThe addition of the complex numbers is: "<<c1<<" + "<<c2<<"i";
 }