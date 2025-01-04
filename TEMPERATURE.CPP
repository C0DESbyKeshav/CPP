#include <iostream>
using namespace std;
int main()
{
    long double c, F, f, C;
    cout << "ENTER A NUMBER TO CONVERT DEGREE CELSIUS INTO DEGREE FAHRENHEIT:\n";
    cin >> c;
    F = (c * 9) / 5 + 32;       //Formula is written as per the BODMAS rule
    cout << "THE TEMPERATURE IN DEGREE FAHRENHEIT = " << F;

    cout << "\nENTER A NUMBER TO CONVERT DEGREE FAHRENHEIT INTO DEGREE CELSIUS:\n";
    cin >> f;
    C = 5 * (f - 32) / 9;       //Formula is written as per the BODMAS rule
    cout << "THE TEMPERATURE IN DEGREE CELSIUS = " << C;
    return 0;
}