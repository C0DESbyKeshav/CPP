#include <iostream>
using namespace std;

// Actual Fibonacci Sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377.....
                 // Position: 0  1  2  3  4  5  6   7   8   9   10   11   12   13.....
int fib(int position)
{
    if (position < 2)
    {
        return 1;
    }
    return fib(position - 2) + fib(position - 1);
}
// ex: fib(3) = fib(1) + {fib(2)} = fib(1) + {fib(0) + fib(1)} = 1 + 1 + 1 = 3

//-------------------------------------------------------------------------------------------

// Factorial of a number:
// 6! = 6*5*4*3*2*1 = 720
// 0! = 1 by definition
// 1! = 1 by definition
// n! = n * (n-1)!
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
// Step by step calculation of factorial(4)
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;

int main()
{
    int a;
    cout << "Enter a number:" << endl;
    cin >> a;
    cout << "The factorial of " << a << " is " << factorial(a) << endl;
    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;
    return 0;
}