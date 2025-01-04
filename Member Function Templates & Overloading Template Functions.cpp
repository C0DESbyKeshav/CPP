#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a) : data(a) {}
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}

void func(int a) //------------------------------------(1)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a) //----------------------------------------(2)
{
    cout << "I am templatised func() " << a << endl;
}

int main()
{
    Harry<float> h(5.7);
    // cout << h.data << endl;
    h.display();

    func(4); // Exact match takes the highest priority.
             // Between 1 & 2, 1 will be given the highest priority.
             // To call (2)nd function, change it's name.

    return 0;
}