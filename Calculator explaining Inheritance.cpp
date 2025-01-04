/*
Exercise Question
Create 2 classes:
    1. Simple - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. Scientific - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.
    3. Create another class Hybrid and inherit it using these 2 classes.
    4. Create an object of Hybrid and display results of the simple and scientific calculator.

    Q1. What type of Inheritance are you using?
          ==> Multiple Inheritance (Two Base Classes- Simple & Scientific inherits Single Derived Class Hybrid).
    Q2. Which mode of Inheritance are you using?
          ==> Public visibility mode.
    Q3. How is code reusability implemented?
          ==> By Inheritance
*/

#include <iostream>
#include <math.h>
#define pi 3.1415926535897
#define e 2.7182818284590
#define rad pi / 180.0
#define deg 180.0 / pi

using namespace std;

class Simple
{
protected:
    long double num1, num2;
    char op;

public:
    void GetData_Sim(char);
    void Print_Sim(char);
};

void Simple::GetData_Sim(char op)
{
    cout << "\nEnter two numbers: " << endl;
    cin >> num1 >> num2;
}

void Simple::Print_Sim(char op)
{
    switch (op)
    {
    case '+':
    {
        cout << "\nAddition of " << num1 << " and " << num2 << " is " << (num1 + num2) << endl;
        break;
    }
    case '-':
    {
        cout << "\nSubtraction of " << num1 << " and " << num2 << " is " << (num1 - num2) << endl;
        break;
    }
    case '*':
    {
        cout << "\nMultiplication of " << num1 << " and " << num2 << " is " << (num1 * num2) << endl;
        break;
    }
    case '/':
    {
        cout << "\nDivision of " << num1 << " and " << num2 << " is " << (num1 / num2) << endl;
        break;
    }
    case '%':
    {
        cout << "\nRemainder after division of " << num1 << " and " << num2 << " is " << (int(num1) % int(num2)) << endl;
        break;
    }
    }
}

class Scientific
{
protected:
    long double num1, num2;
    char op;

public:
    void GetData_Sci(char);
    void Print_Sci(char);
};

void Scientific::GetData_Sci(char op)
{
    if (op == '^')
    {
        cout << "\nEnter two numbers: " << endl;
        cin >> num1 >> num2;
    }
    else
    {
        cout << "\nEnter a number: " << endl;
        cin >> num1;
    }
}

void Scientific::Print_Sci(char op)
{
    switch (op)
    {
    case '^':
    {
        cout << endl
             << num1 << " to the power " << num2 << " is " << (pow(num1, num2)) << endl;
        break;
    }
    case 's':
    {
        cout << "\nSquare root of " << num1 << " is " << (sqrt(num1)) << endl;
        break;
    }
    case 'c':
    {
        cout << "\nCube root of " << num1 << " is " << (cbrt(num1)) << endl;
        break;
    }
    case 'o':
    {
        cout << "\ncos of " << num1 << " degrees is " << (cos(num1 * rad)) << endl;
        break;
    }
    case 'i':
    {
        cout << "\nsin of " << num1 << " degrees is " << (sin(num1 * rad)) << endl;
        break;
    }
    case 'a':
    {
        cout << "\ntan of " << num1 << " degrees is " << (tan(num1 * rad)) << endl;
        break;
    }
    case 'e':
    {
        cout << "\nThe exponential value of " << num1 << " is " << exp(num1) << endl;
        break;
    }
    case 'l':
    {
        cout << "\nThe natural logarithmic (log to base e) value of " << num1 << " is " << log(num1) << endl;
        cout << "The common logarithmic (log to base 10) value of " << num1 << " is " << log10(num1) << endl;
        break;
    }
    case 'b':
    {
        cout << "\nThe absolute value of " << num1 << " is " << abs(num1) << endl;
        break;
    }
    }
}

class Hybrid : public Simple, public Scientific
{
private:
    char op;

public:
    Hybrid();
    void GetData_Hy(char);
    void Print_Hy(char);
};

Hybrid::Hybrid()
{
    cout << "Instructions:" << endl
         << "+   ==> Addition" << endl
         << "-   ==> Subtraction" << endl
         << "*   ==> Multiplication" << endl
         << "/   ==> Division" << endl
         << "%   ==> Remainder" << endl
         << "^   ==> Power" << endl
         << "s   ==> Square root" << endl
         << "c   ==> Cube root" << endl
         << "o   ==> cos" << endl
         << "i   ==> sin" << endl
         << "a   ==> tan" << endl
         << "e   ==> Exponent" << endl
         << "l   ==> Logarithm" << endl
         << "b   ==> Absolute value" << endl;
}

void Hybrid::GetData_Hy(char op)
{
    if ((op == '+') || (op == '-') || (op == '*') || (op == '/') || (op == '%'))
    {
        GetData_Sim(op);
    }
    else
    {
        GetData_Sci(op);
    }
}

void Hybrid::Print_Hy(char op)
{
    if ((op == '+') || (op == '-') || (op == '*') || (op == '/') || (op == '%'))
    {
        Print_Sim(op);
    }
    else
    {
        Print_Sci(op);
    }
}

int main()
{
start:
    cout << endl
         << "---------- memory cleared ----------" << endl
         << endl;
    Hybrid hc;

    char sign_of_operator;

    cout << "\nSign of Operator:" << endl;
    cin >> sign_of_operator;

    hc.GetData_Hy(sign_of_operator);
    hc.Print_Hy(sign_of_operator);

    goto start;
    return 0;
}