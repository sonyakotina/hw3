#include "Circle.h"
#include "Vector3.h"

using namespace std;

int main()
{
    Vector3 v1, v2(2, 3, 6);
    v1.SetXYZ(3, 2, 3);
    Vector3 v3 = v1 * v2 - v2;
    cout << "v1 = " << v1 << "\nb = " << v2 << "\nc = " << v3 << "\nabs(v3) = " << v3.Abs();

    Circle c(6);
    cout << "\n\nDiameter = " << c.Diameter() << "\nlenght = " << c.CircleLength() << "\nArea = " << c.Area();
}
