#include <iostream>
#include "Circle.h"
#include "Circle.cpp"
using namespace std;

int main(){
    Circle circle;
    double radius;
    cout << "Enter the radius of cirlce: " ;
    cin >> radius;
    circle.setRadius(radius);
    cout << "The radius of cirlcle is : " << circle.getRadius() <<endl;
    cout << "The Area of cirlcle is : " << circle.getArea() <<endl;
    cout << "The Diameter of cirlcle is : " << circle.getDiameter() <<endl;
    cout << "The Circumference of cirlcle is : " << circle.getCircumference() <<endl;
    return 0;
}