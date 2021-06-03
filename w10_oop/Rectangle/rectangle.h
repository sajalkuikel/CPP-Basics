#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class rectangle
{
private:
    double width;
    double length;
public:
    void setWidth(double);
    void setLength(double);
    double getLength() const;
    double getWidth() const;
    double getArea() const;

};
#endif