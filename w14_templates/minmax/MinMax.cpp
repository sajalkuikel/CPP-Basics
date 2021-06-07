#include <iostream>
using namespace std;

template <class T1, class T2>


// multiple data types in paramater 
T1 minimum(T1 num1,  T2 num2){
    if(num1 < num2){
        return num1;
    }else{
        return num2;
    }
}

template <class T1, class T2>
T1 maximum(T1 num1,  T2 num2){
    if(num1 > num2){
        return num1;
    }else{
        return num2;
    }
}


int main(){

    double num1= 10.87;  int num2= 13;
    cout << "minimum Int is:  " << minimum(num1,num2) << endl;
    // cout << "maximum Int is: " << maximum(num1,num2) << endl;

    double num3 =5.50, num4= 11.6;
    cout << "Minimum Double is:  " << minimum(num3,num4) << endl;
    cout << "Maximum  Double is: " << maximum(num3,num4) << endl;

    float num5 =4.2350, num6= 14.433;
    cout << "Minimum Float is:  " << minimum(num5,num6) << endl;
    cout << "Maximum  Float is: " << maximum(num5,num6) << endl;


    return 0; 
}