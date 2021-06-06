#include <iostream>
using namespace std;

class Time
{
    private :
            int hour;
            int min;
            int sec;
    public:
        Time(){
            hour=0;
            min=0;
            sec=0;
        }
        Time(int h, int m, int s){
            hour=h;
            min=m;
            sec=s;
        }
        void displayInFormat(){
            cout << hour << " : " << min << " : " << sec <<endl;
        }
        Time operator+(const Time ob){
            Time newTime;
            
            newTime.hour =  hour + ob.hour;
            newTime.min  =  min + ob.min;
            newTime.sec =  sec + ob.sec;

            if(newTime.min > 60 ){
                newTime.hour++;
                newTime.min = newTime.min - 60;
            }
            if(newTime.sec > 60 ){
                newTime.min++;
                newTime.sec = newTime.sec - 60;

            }
            return newTime;
        }
};

int main(){
    Time t1(1,50,50);
    Time t2(2,20,20);
    Time t3;

    t3 = t1 + t2;
    t1.displayInFormat();
    t2.displayInFormat();
    t3.displayInFormat();
}