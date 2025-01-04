#include <iostream>
using namespace std;

class c2; // Predeclaration of class 'Y'. If this is not done, it will throw an error.

class c1
{
    int value;
    friend void exchange(c1 &, c2 &);

public:
    void getdata(int a)
    {
        value = a;
    }

    void display()
    {
        cout << value << endl;
    }
};

class c2
{
    int value;
    friend void exchange(c1 &, c2 &);

public:
    void getdata(int a)
    {
        value = a;
    }

    void display()
    {
        cout << value << endl;
    }
};

void exchange(c1 &x, c2 &y) // Reference objects. If we pass the objects as usual then the variables won't get swapped so it is mandatory to pass the objects as reference objects.
{
    int tmp = x.value;
    x.value = y.value;
    y.value = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.getdata(34);
    oc2.getdata(67);        

    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging becomes: ";
    oc1.display();
    cout << "The value of c2 after exchanging becomes: ";
    oc2.display();

    return 0;
}