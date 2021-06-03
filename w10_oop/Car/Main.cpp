#include <iostream>
#include "Car.h"
#include "Car.cpp"
using namespace std;

int main(){
    
    Car car(2020, 2000);

    cout <<  "Speed of car initially : " << car.getSpeed();
    car.accelerate();
    cout <<  "\nSpeed of car after accelerating : " <<car.getSpeed();
    car.brake();
    cout <<  "\nSpeed of car after braking : " <<car.getSpeed();

    return 0;
}