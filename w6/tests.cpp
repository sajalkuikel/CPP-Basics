#include <iostream>
using namespace std;

int main()
{
    int x= 25;
    int *ptr; 

    ptr =&x;

    cout << "The value in x is " << x <<endl;
    cout  << "The address of x or (ptr) is : " << &x << endl;
    cout  << "The value of ptr : " << ptr << endl;
    cout  << "Dereferenced ptr : " << *ptr << endl;
    cout  << "The address of ptr is : " << &ptr << endl;
    
    return 0;
}