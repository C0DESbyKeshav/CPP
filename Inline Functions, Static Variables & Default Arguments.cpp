#include <iostream>
using namespace std;

inline int product(int x, int y) // inline function means the function instead of repeating the whole procedure, function will copy the statement and will directly compile, which will save the time in compilation.
                                 //  HERE, x AND y ARE CALLED FORMAL PARAMETERS/ ARGUMENTS.
{
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return x * y;
}

float moneyReceived(int currentMoney, float factor = 1.04) // Imp Rule: Default argument should be written after all the formal arguments
                                                           //  Here, 'factor' is the default argument
                                                           //  It means that if we don't pass any value to this function inside main function then it will by default be 1.04
{
    return currentMoney * factor; // Ignore the logic behind this commerce formula and just focus on the purpose of this whole program.
}

// int strlen(const char *p)
//{
//}

int main()
{
    int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;  // HERE, a AND b ARE CALLED ACTUAL PARAMETERS/ ARGUMENTS.
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money) << "Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money, 1.1) << " Rs after 1 year";
    return 0;
}
