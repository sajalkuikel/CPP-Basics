//Odometer.h:
#pragma once
#include "FuelGauge.h"
class Odometer
{
 private:
  int currentMileage;
  FuelGauge *fuelG;
 public:
    Odometer();
  Odometer(int miles,FuelGauge *f)
  {
   currentMileage = miles;
   fuelG= f;
  }
 int getCurrentMileage()
 {
  return currentMileage;
 }

 void incrementcurrentMileage()
 {
  if(currentMileage < 999999 )
   currentMileage++;
  else 
   currentMileage = 0;
 }

 void decrementcurrentMileage()
 {
  if (currentMileage > 24 )
   currentMileage--;
   (*fuelG).decrementFuelTank();
 }
};