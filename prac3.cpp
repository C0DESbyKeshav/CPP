//prac no: 7
#include<iostream>
using namespace std;
class Ratio
{
    public:
    Ratio()
    {
        cout<<"Object is born\n";
    }
    int print() 
    {
        cout<<"Now object in use\n";
        return 0;
    }
    ~Ratio()
    {
        cout<<"Object dies\n";
    }
};
int main()
{
    cout<<"FAIZ KHAN.\n";
    Ratio r;
    r.print();
    return 0;
}