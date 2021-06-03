#include <iostream>
using namespace std;

//function prototypes
    
void getNumber(int *);
void doubleNumber(int *);

int main()
{
    int number;


    getNumber(&number);
    
    cout << "Number is :  " << number << endl ;
    
    doubleNumber(&number);

    cout << "Number doubled is :  " << number;
}

void getNumber(int *inputPtr)
{
    cout <<"Enter an integer number: "; 
    cin >> *inputPtr;
}

void doubleNumber(int *val)
{
    *val *= 2;  
}