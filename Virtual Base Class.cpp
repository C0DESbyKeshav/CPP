#include <iostream>
using namespace std;

/*
Hybrid Inheritance:

                        Student
        ___________________|______________________
       |                                         |
     Test                                     Sports
      |_________________________________________|
                          |
                        Result
*/

/*
A variable from class Student is inherited by class Test & class Sports and that same variable is inherited by class Result.
When that same variable is inherited from 2 classes (Test & Sports) to the class (Result) then there occurs a ambiguity in class Result.
Hence to solve that ambiguity, the concept of virtual is introduced.
*/
//* This concept is only applicable when there's Inheritance */

class Student
{
protected:
    int roll_no;

public:
    void set_no(int r)
    {
        roll_no = r;
    }

    void print_no()
    {
        cout << "Roll number: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float physics, maths;

public:
    void set_marks(float p, float m)
    {
        physics = p;
        maths = m;
    }

    void print_marks()
    {
        cout << "Marks obtained in Physics: " << physics << endl;
        cout << "Marks obtained in Maths: " << maths << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int relay, cricket;

public:
    void set_score(int r, int c)
    {
        relay = r;
        cricket = c;
    }

    void print_score()
    {
        cout << "Relay Score: " << relay << endl;
        cout << "Cricket Score: " << cricket << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void print_total()
    {
        total = physics + maths + relay + cricket;
        print_no();
        print_marks();
        print_score();
        cout << "Total score obtained: " << total << endl;
    }
};

int main()
{
    Result res;
    res.set_no(48);
    res.set_marks(52.13, 80.04);
    res.set_score(64, 49);
    res.print_total();

    return 0;
}