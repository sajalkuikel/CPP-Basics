#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
            int yearModel;
            int make;
            int speed;
    public: 
            Car();
            Car(int,int);
            // void setModel(int);
            // void setMake(int);
            // void setSpeed(int);
            
            int getModel()const
            {
                return yearModel;
            }
            
            int getMake()const
            {
                return make;
            }

            int getSpeed()const
            {
                return speed;
            }

            void brake();
            void accelerate();

};

#endif