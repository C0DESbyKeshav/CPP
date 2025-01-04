// Create a function which takes two objects and computes the distance between those two points
// Hint : Make it a friend function

#include <iostream>
#include <math.h>
using namespace std;

class Point2;

class Point1
{
    float x1, y1;

public:
    Point1(float, float);
    float Distance(Point1, Point2);
};

Point1::Point1(float a, float b)
{
    x1 = a;
    y1 = b;
}

class Point2
{
    float x2, y2;

public:
    Point2(float, float);
    friend float Point1::Distance(Point1, Point2);
};

Point2::Point2(float a, float b)
{
    x2 = a;
    y2 = b;
}

float Point1::Distance(Point1 p1, Point2 p2)
{
    return (sqrt(pow((p1.x1 - p2.x2), 2) + pow((p1.y1 - p2.y2), 2)));
}

int main()
{
    // Implicit call
    Point1 a1(1, 1);
    Point2 b1(1, 1);
    float result = a1.Distance(a1, b1);
    cout << "The distance between two points is " << result;

    // Explicit call
    Point1 a2 = Point1(1, 1);
    Point2 b2 = Point2(1, 1);
    result = a2.Distance(a2, b2);
    cout << "\nThe distance between two points is " << result;

    return 0;
}