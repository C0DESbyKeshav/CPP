#include<iostream>
using namespace std;
class Factorial
{
    private:
    int fact, m;
    public:
    Factorial();      //Constructor declaration
    ~Factorial();     //Destructor declaration
};
Factorial::Factorial()                          //Constructor Definition
{
    cout<<"Enter a number:\n";
    cin>>fact;
    m=fact-1;
    for(int i=1;i<=m;i++)
    {
        fact=fact*i;
    }
}
Factorial::~Factorial()                         //Destructor Definition
{
    cout<<"The factorial is = "<<fact;
}

int main()
{
    Factorial obj;      //Constructor gets called automatically as soon as the object of that class is created
    return 0;           //Also, Destructor gets called automatically as the code ends at the last
}