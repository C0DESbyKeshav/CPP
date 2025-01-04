/*Dynamic Intialization of Objects meaning:
The Compiler decides which constuctor function to call at the very moment of compilation (at real time compilation) depending on the nature of the input given by the user.
For example in this program below, both the constructor-functions "BankDeposit(int p, int y, float r)" & "BankDeposit(int p, int y, int r)" have the same number-of-arguments and the same function-name.
    So, the compiler decides which constructor-function to call based on the input-type of the 3rd argument (rate of interest) either to be integer-type or float-type input.
        if the user inters '0.04' for 'r(rate of interest)' then "BankDeposit(int p, int y, float r)" <-- this constructor-function gets called.
        if the user inters '4' for 'r(rate of interest)' then "BankDeposit(int p, int y, int r)" <-- this constructor-function gets called.
*/

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}                    // A Default Constructor is mandatory to be created so that if there is no input for the compiler then it may get confused so there should always be a default constructor to avoid that possibility of compiler to throw an error.
    BankDeposit(int p, int y, float r); // r can be a value like 0.04  // Interest rate in fraction

    BankDeposit(int p, int y, int r); // r can be a value like 4    // Interest rate in percentage
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); // A simple formula to calculate the return of investment.
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100; // Here, the rate of interest is in %age so, this line converts it into float point number for the further calculation.
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate); // A simple formula to calculate the return of investment.
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cin >> p >> y >> r;
    cout << "Enter the value of p, y and r" << endl;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}