#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"
#include <cmath>

class Triangle
{
private:
    Point a;
    Point b;
    Point c;

    double getLength(Point &a, Point &b);

public:
    Triangle(Point a, Point b, Point c);
    Triangle(const Triangle &other);

    bool equals(const Triangle &other);
    void flip();
    void move(double x, double y);

    double getSurface();
    std::string toString();
};

#endif