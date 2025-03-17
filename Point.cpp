#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;

Point::Point(double xCoord, double yCoord) {
    x = xCoord;
    y = yCoord;
}

double Point::distanceTo(const Point& other) const
{
    return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
}

void Point::print() const
{
    cout << "(" << x << ", " << ")" << endl;
}