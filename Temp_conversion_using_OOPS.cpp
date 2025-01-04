#include<iostream>
using namespace std;

class Temperature
{
    int f, c, Fahrenheit, Celsius;
    public:
    void celsius_to_fahrenheit();
    void fahrenheit_to_celsius();
};
void Temperature::celsius_to_fahrenheit()
{
    cout<<"\n\nEnter a temperature value in degree celsius:\n";
    cin>>c;
    Fahrenheit = (c * 9) / 5 + 32;       //Formula is written as per the BODMAS rule
    cout<<c<<" degree Celsius = "<<Fahrenheit<<" degree Fahrenheit.";
}
void Temperature::fahrenheit_to_celsius()
{
    cout<<"\n\nEnter a temperature value in degree fahrenheit:\n";
    cin>>f;
    Celsius = 5 * (f - 32) / 9;       //Formula is written as per the BODMAS rule;
    cout<<f<<" degree Fahrenheit = "<<Celsius<<" degree Celsius.";
}

int main()
{
    int n;
    cout<<"\nTemperature Conversion\n";
    cout<<"Enter '1' for degree Celsius to degree Fahrenheit.\n";
    cout<<"Enter '2' for degree Fahrenheit to degree Celsius.\n";
    cout<<"Enter '3' for both the conversions.\n";
    cin>>n;
    Temperature t;
    
    switch(n)
    {
        case 1:
        t.celsius_to_fahrenheit();
        break;

        case 2:
        t.fahrenheit_to_celsius();
        break;

        case 3:
        t.celsius_to_fahrenheit();
        t.fahrenheit_to_celsius();
        break;
    }

    return 0;
}