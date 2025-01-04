#include <iostream>
using namespace std;

template <class T1 = int, class T2 = char, class T3 = float> // In case if the data type of the template class is not specified when creating the objects of the class then, by default, these data types are set.
class Keshav
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
    Keshav(T1 a, T2 b, T3 c) : data1(a), data2(b), data3(c){}; // Initialization list in constructor
    void display()
    {
        cout << "value of data1 = " << data1 << " & value of data2 = " << data2 << " & value of data3 = " << data3 << endl;
    }
};

int main()
{
    Keshav<> k1(1, 'c', 1.5); // This is when the default parameters will be used.
    k1.display();
    Keshav<float, int, char> k2(1.5, 1, 'c'); // This will overwrite the default parameters of the template.
    k2.display();
    return 0;
}