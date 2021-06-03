#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

class Circle{
    private: 
            double radius;
            double PI = 3.14159;
    public: 
        Circle();
        Circle( double);

        void setRadius(double);
        
        double getRadius()const;
        double getArea()const;
        double getDiameter()const;
        double getCircumference()const;
};
#endif



