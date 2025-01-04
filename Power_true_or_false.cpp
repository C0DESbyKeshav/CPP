#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    for(int i=0;i<=999999;i++)
    {
        if(pow(2,i)==n)
        {
            cout<<"True";
            break;
        }
        else
        {
            if(i==999999)
            {
                cout<<"False";
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}