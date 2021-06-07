#include <iostream>
#include "IntStack.cpp"
#include "IntStack.h"
#include "MathStack.h"
#include "MathStack.cpp"

using namespace std;

int main(){

    cout << " **Demonstrating div function ** " <<endl;

    MathStack stack1(5);
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(20);
    stack1.push(5);

    cout << "Size of stack : " <<  stack1.stackSize <<endl;
    stack1.display();

    stack1.div();
    int num;
    stack1.pop(num);
    cout << "The Division of second last by last is : " <<  num << endl;


    //addAll
    cout << " **Demonstrating addAll function ** " <<endl;
    MathStack stack2(5);
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);
    stack2.push(20);
    stack2.push(5);

    stack2.display();

    stack2.addAll();
    int total;
    stack2.pop(total);
    cout << "The sum is : " <<  total << endl;
    

    //multAll
    cout << " **Demonstrating multAll function ** " <<endl;
    MathStack stack3(5);
    stack3.push(1);
    stack3.push(2);
    stack3.push(3);
    stack3.push(20);
    stack3.push(5);

    stack3.display();

    stack3.multAll();
    int product;
    stack3.pop(product);
    cout << "The Total product is : " <<  product << endl;
    
    // system("pause");
    return  0 ;
}