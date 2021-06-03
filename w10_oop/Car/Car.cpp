#include "Car.h"
#include <iostream>

using namespace std;

Car:: Car(){
    
}

Car:: Car(int yearModelP, int makeP){
    yearModel = yearModelP;
    make = makeP;
    speed= 0 ;
}

void Car::accelerate(){
    speed += 5;
}

void Car:: brake(){
    speed -= 5;
}
