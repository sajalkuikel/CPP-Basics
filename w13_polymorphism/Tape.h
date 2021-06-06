#include <string>
#include <iostream>
#include "Publication.h"
#ifndef TAPE_H
#define TAPE_H

using namespace std;

class Tape :public Publication{
    private:
        float time;
    public: 
        Tape(){

        }
        void getData(){
            Publication::getData();
            cout << "Enter time \n";
            cin >> time;
        }
        void putData(){ 
            Publication::putData();
            cout << "Time is: " << time <<endl;
        }
};


#endif