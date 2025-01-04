#include <iostream>
using namespace std;

float funcAverage(int a, int b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAverage(5, 2);
    printf("Average is %.3f\n", a); // An alternative of 'cout'.
                                    // '%f' means it's float variable & '.3' means it will only print 3 digits after the decimal.

    int x = 5, y = 7;
    swapp(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
