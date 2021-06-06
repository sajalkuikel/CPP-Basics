//main.cpp:
#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"
using namespace std;
int main()
{
    FuelGauge fuelG(15);
    Odometer odm(0, &fuelG);

    while (fuelG.getCurrentAmountOfFuel() > 0)
    {
    odm.incrementcurrentMileage();
    cout << "Mileage: " << "Fuel level"<< fuelG.getCurrentAmountOfFuel()<<" gallons";
    
    }
    return 0;
}