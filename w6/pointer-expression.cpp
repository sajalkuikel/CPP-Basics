#include <iostream>
using namespace std;

int main(){

    int vals[]= { 4, 7, 11 };
    int * valptr;

    valptr= vals; //assigning address of first element of array to valptr
    

    //multiple ways of accessing array elements
    //array name and []
    cout << " vals[2] = " << vals[2] <<endl; 
    cout << " valptr [2] = " << vals[2] <<endl; 

    //addresses each taking 4 bytes here
    cout << " valptr = " << valptr <<endl; 
    cout << " valptr +1 = " << valptr+1 <<endl; 
    cout << " valptr +2 = " << valptr+2 <<endl; 
    cout << " vals " << vals <<endl; 

    //values stored in those addresses
    cout << " *(valptr) = " << *valptr <<endl; 
    cout << " *(valptr +1 ) = " << *(valptr +1 ) <<endl; 
    cout << " *(valptr +2 ) = " << *(valptr +2 ) <<endl; 

    return 0 ;
}