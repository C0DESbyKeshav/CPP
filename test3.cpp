// #include<iostream>
// #include<string.h>
// #include<math.h>
// using namespace std;
// int main()
// {
//     cout<<"Enter an expression:"<<endl;
//     string expression;
//     cin>>expression;
//     cout<<expression<<endl;
//     //cout<<expression[2];
    
//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int a[3][2]= {1, 2, 3, 4, 5, 6};
    //*           00 01 10 11 20 21   , i = 0 to 2, j = 0 to 1
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            cout<<a[i][j];
        }
    }
    return 0;
}