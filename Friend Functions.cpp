// Friend Function --> (Method I)
/*
#include <iostream>
using namespace std;

class GirlsGroup
{
private:
    int crush;

public:
    GirlsGroup()
    {
        crush = 1000;
    }

    friend void boy(GirlsGroup);
};

void boy(GirlsGroup g1)
{
    cout << g1.crush;
}

int main()
{
    GirlsGroup g1;
    boy(g1);

    return 0;
}
*/

//************************************************************************

// Friend Function --> (Method II)

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2) // Since, this function returns object (o3 of class Complex) so the data type of this function cannot be 'void' or 'int' as it will throw error as {no suitable conversion function from "Complex" to "int" exists}.
                                           // The data type of this function needs to be the class of which the object is created (i.e. it should be 'Complex')
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions:
1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the object of that class. {c1.sumComplex() == Invalid}
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need {object_name.member_name} to access any member.
*/