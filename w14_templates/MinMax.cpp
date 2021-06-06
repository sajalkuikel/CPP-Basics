#include <iostream>
using namespace std;

template <class T>

T minimum(T num1,  T num2){
    if(num1 < num2){
        return num1;
    }else{
        return num2;
    }
}

template <class T>
T maximum(T num1,  T num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}


int main(){

    int num1= 5, num2= 10;
    cout << "minimum Int is:  " << minimum(num1,num2) << endl;
    cout << "maximum Int is: " << maximum(num1,num2) << endl;

    double num3 =5.50, num4= 11.6;
    cout << "Minimum Double is:  " << minimum(num3,num4) << endl;
    cout << "Maximum  Double is: " << maximum(num3,num4) << endl;

    float num5 =4.2350, num6= 14.433;
    cout << "Minimum Float is:  " << minimum(num5,num6) << endl;
    cout << "Maximum  Float is: " << maximum(num5,num6) << endl;


    return 0; 
}