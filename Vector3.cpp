#include "Vector3.h"

Vector3::Vector3()
{
    x = y = z = 0;
}

Vector3::Vector3(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

void Vector3::SetXYZ(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

void Vector3::SetX(double x)
{
    this->x = x;
}

void Vector3::Sety(double y)
{
    this->y = y;
}

void Vector3::Setz(double z)
{
    this->z = z;
}

Vector3 Vector3::operator+(Vector3& v)
{
    return { x + v.x, y + v.y, z + v.z };
}

Vector3 Vector3::operator-(Vector3& v)
{
    return { x - v.x, y - v.y, z - v.z };
}

Vector3 Vector3::operator*(Vector3& v)
{
    return { x * v.x, y * v.y, z * v.z };
}

Vector3 Vector3::operator*(double k)
{
    return { x * k, y * k, z * k };
}

Vector3 Vector3::operator/(double k)
{
    return { x / k, y / k, z / k };
}

std::ostream& operator<<(std::ostream& out, const Vector3& v)
{
    return { out << "(" << v.x << "  " << v.y << "  " << v.z << ")" };
}

double Vector3::Abs()
{
    return { sqrt(x * x + y * y + z * z) };
}
