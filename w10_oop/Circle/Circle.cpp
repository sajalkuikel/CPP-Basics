#include "Circle.h"
#include <iostream>

using namespace std;

    Circle:: Circle()
    {
        radius =0;
    }

    Circle::Circle( double r)
    {
        radius =r;
    }

    void Circle::setRadius(double r)
    {
        radius =r;
    }
    double Circle::getRadius()const
    {
        return radius;
    }
    double Circle:: getArea()const
    {
        return PI* radius*radius;
    }
    double Circle:: getDiameter() const
    {
        return 2*radius;
    }
    double Circle::getCircumference()const
    {
        return 2*PI*radius;
}


