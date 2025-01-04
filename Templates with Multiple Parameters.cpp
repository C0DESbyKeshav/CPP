#include <iostream>
using namespace std;

// Templates in C++ provides us the luxury / flexibility to pass any type of data types when creating an object of the class.
// We can even pass one, two or more than two type of data types
// We can even pass 'class' as a data type

/*
SYNTAX:
template<class T1, class T2>
class nameOfClass
{
    //body
}
*/

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "data1= " << this->data1 << " & data2= " << this->data2 << endl;
    }
};

int main()
{

    // Demonstration of some of the possible combinations of built-in data types:

    myClass<int, int> obj1(1, 2);
    obj1.display();
    myClass<int, char> obj2(1, 'c');
    obj2.display();
    myClass<int, float> obj3(1, 2.5);
    obj3.display();
    myClass<int, double> obj4(1, 2);
    obj4.display();

    cout << endl;

    myClass<char, int> obj5('c', 2);
    obj5.display();
    myClass<char, char> obj6('a', 'b');
    obj6.display();
    myClass<char, float> obj7('c', 2.5);
    obj7.display();
    myClass<char, double> obj8('c', 2);
    obj8.display();

    cout << endl;

    myClass<float, int> obj9(1.5, 2);
    obj9.display();
    myClass<float, char> obj10(1.5, 'c');
    obj10.display();
    myClass<float, float> obj11(1.5, 2.5);
    obj11.display();
    myClass<float, double> obj12(1.5, 2);
    obj12.display();

    cout << endl;

    myClass<double, int> obj13(1, 2);
    obj13.display();
    myClass<double, char> obj14(1, 'c');
    obj14.display();
    myClass<double, float> obj15(1, 2.5);
    obj15.display();
    myClass<double, double> obj16(1, 2);
    obj16.display();
}
