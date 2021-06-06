//FuelGauge.h:
#pragma once

using namespace std;
class FuelGauge
{
 private:
  int currentAmountOfFuel;
 public:

    FuelGauge();
    ~FuelGauge();
  FuelGauge(int gallons)
  {
   currentAmountOfFuel=gallons;
  }
//FuelGauge();
 int getCurrentAmountOfFuel()
 {
  return currentAmountOfFuel;
 }

 void incrementFuelTank()
 {
  if (currentAmountOfFuel< 15 )
   currentAmountOfFuel++;
 }

 void decrementFuelTank()
 {
  if(currentAmountOfFuel>0)
   currentAmountOfFuel--;
 }
};