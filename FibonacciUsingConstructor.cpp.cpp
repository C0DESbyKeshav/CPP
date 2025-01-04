#include<iostream>
using namespace std;
class fibonacci
{
  private:
    unsigned long int n,a,b,sum;
    public:
    fibonacci();                //constructor declared
    int program_logic();
};
fibonacci::fibonacci()         //constructor defined
{
    a=0;
    b=1;
    cout<<"Enter a limit for fibonacci series\n";
    cin>>n;
    cout<<"\nThe fibonacci series obtained= "<<a<<" "<<b;
}
int fibonacci::program_logic()
{
    for(int i=3;i<=n;i++)
    {
        sum=a+b;
        cout<<" "<<sum;
        a=b;
        b=sum;
    }
    return 0;
}
int main()
{
     fibonacci f;
     f.program_logic();
     return 0;
}