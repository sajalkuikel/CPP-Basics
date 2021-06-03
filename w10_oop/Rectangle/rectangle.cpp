#include <iostream>
#include "rectangle.h"
using namespace std;

void rectangle::setWidth(double w)
{
    width = w;
}

void rectangle::setLength(double len)
{
    length= len;
}

double rectangle::getLength() const{
    return length;
}

double rectangle:: getWidth() const
{
    return width;
}

double rectangle::getArea() const
{
    return width * length;
}



int main(){

    rectangle box;
    double rectWidth;
    double rectLength;

    cout << "Enter width: ";
    cin >> rectWidth;
    cout << "Enter length";
    cin >> rectLength;

    box.setLength(rectLength);
    box.setWidth(rectWidth);

    //display:
    cout << "Length: " << box.getLength() << endl;
    cout << "Width: " << box.getWidth() << endl;
    cout << "Area: " << box.getArea() << endl;
    
    return 0;
}