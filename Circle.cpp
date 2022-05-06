#include "Circle.h"

Circle::Circle()
{
    this->rad = 0 ;
}

Circle::Circle(double rad)
{
    this->rad = rad;
}

double Circle::CircleLength()
{
    return {2 * M_PI * rad};
}

double Circle::Diameter()
{
    return {2 * rad};
}

double Circle::Area()
{
    return M_PI * rad * rad;
}

std::ostream& operator<<(std::ostream& out, const Circle& c) {
    return out << "Circle{ " << c.rad << " }";
}
