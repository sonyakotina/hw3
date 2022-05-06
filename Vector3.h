#include <iostream>
#ifndef VECTOR3_H_
#define VECTOR3_H_

class Vector3 {
private:

    double x, y, z;

public:

    Vector3();
    Vector3(double x, double y, double z);

    void SetXYZ(double x, double y, double z);
    void SetX(double x);
    void Sety(double y);
    void Setz(double z);

    Vector3 operator+(Vector3& v);
    Vector3 operator-(Vector3& v);
    Vector3 operator*(Vector3& v);
    Vector3 operator*(double k);
    Vector3 operator/(double k);
    friend std::ostream& operator<<(std::ostream& out, const Vector3& v);

    double Abs();

};

#endif
