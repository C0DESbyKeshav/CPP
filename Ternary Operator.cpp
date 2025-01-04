#include <iostream>
using namespace std;

// Conditional operator (executes only after checking the truth value of the conditions) and Ternary operator (three operators are used ? : :) are one and the same.
/*  Syntax:
    (Condition) ? (Expression_if_true : Expression_if_false);
*/

int main()
{
    int num1, num2, num3, greatest;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    // Ternary operator for two numbers (num1 and num2)
    greatest = (num1 > num2) ? num1 : num2;
    //           Condition     true   false
    printf("The greatest number between %d and %d is %d\n", num1, num2, greatest);

    // Ternary operator for three numbers (num1, num2 and num3)
    greatest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : (num2 > num3) ? num2 : num3;
    //          Condition         Condition     true   false    Condition      true   false
    //          Condition       <----------if_true--------->    <---------if_false-------->
    printf("The greatest number between %d, %d and %d is %d\n", num1, num2, num3, greatest);

    return 0;
}