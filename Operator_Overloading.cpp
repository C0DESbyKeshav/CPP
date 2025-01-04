#include<iostream>
using namespace std;
class Complex
{
    public:
    int r,im;
    int getdata()
    {
        cout<<"\nEnter the real and imaginary parts of a complex number:\n";
        cin>>r>>im;
        return 0;
    }
    Complex operator+ (Complex bb)    //here, operator + is going to be overloaded (i.e + operator is going to get a special meaning) and Complex bb is the argument of the function and bb is the object created of class Complex.   
    {
        Complex cc;    //object created of class Complex
        cc.r = r + bb.r;     //In reality, this statement is [cc.r = aa.r + bb.r] (but not mentioning aa is understandable to the compiler) 
                             //where aa is real part of 1st number and bb is the real part of 2nd number
                             //which means that real part of first number is added to the real part of 2nd number and the result is stored in the third real number which is going to be our answer 

        cc.im = im + bb.im;     //In reality, this statement is [cc.im = aa.im + bb.im] (but not mentioning aa is understandable to the compiler) 
                             //where aa is imaginary part of 1st number and bb is the imaginary part of 2nd number
                             //which means that imaginary part of first number is added to the imaginary part of 2nd number and the result is stored in the third imaginary number which is going to be our answer 
        
        return cc;

        //In this function, we gave an argument 'Complex bb' and we also return a value(object), this is said to be a 'with argument with return type' of function
    }
    int print()
    {
        cout<<"\nThe complex number is: "<<r<<" + "<<im<<"i\n";
        return 0;
    }
    int result()
    {
        cout<<"\nAddition of the complex number is: "<<r<<" + "<<im<<"i\n";
        return 0;
    }
};

int main()
{
    Complex cc2,cc3,cc4;
    
    cc2.getdata();
    cc2.print();

    cc3.getdata();
    cc3.print();

    cc4 = cc2 + cc3;   //writing of this statement is only possible because we have overloaded the + operator because the built in version of + operator would only add two variables.
                       //So, giving such a special meaning to the + operator is called operator overloading
    cc4.result();

    return 0;
}