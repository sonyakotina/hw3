#ifndef CIRCLE_H_
#define CIRCLE_H_
#define _USE_MATH_DEFINES

#include<cmath>
#include <iostream>

class Circle
{

private:
    double rad;

public:

    Circle();
    Circle(double rad);
    double CircleLength();
    double Diameter();
    double Area();

    friend std::ostream& operator<<(std::ostream& out, const Circle& c);
};

#endif
