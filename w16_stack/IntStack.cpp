// Implementation file for the IntStach class
#include <iostream>
#include "IntStack.h"
using namespace std;

//***********************************************
// Constructor                                  *
// This constructor creates an empty stack. The *
// size parameter is the size of the stack.     *
//***********************************************
template <class T>
    IntStack <T>::IntStack(int size)
{
    stackArray = new T[size]; 
    stackSize = size; 
    top = -1;
}

//***********************************************
// Copy constructor                             *
//***********************************************
template <class T>
IntStack <T> ::IntStack(const IntStack &obj)
{
    // Create the stack array.
    if (obj.stackSize > 0)
        stackArray = new T[obj.stackSize];
    else
        stackArray = NULL;

   // Copy the stackSize attribute.
    stackSize = obj.stackSize;

   // Copy the stack contents.
   for (int count = 0; count < stackSize; count++)
      stackArray[count] = obj.stackArray[count];

   // Set the top of the stack.
   top = obj.top;
}

//***********************************************
// Destructor                                   *
//***********************************************
template <class T>
IntStack <T>::~IntStack()
{
   delete [] stackArray;
}

//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************
template <class T>
void IntStack <T>::push(T num)
{
    if (isFull())
    {
        cout << "The stack is full.\n";
    }
    else
    {
        top++;
        stackArray[top] = num;
    }
}

//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *
// passed as an argument.                            *
//****************************************************
template <class T>
void IntStack <T>::pop(T &num)
{
    if (isEmpty())
    {
        cout << "The stack is empty.\n";
    }
    else
    {
        num = stackArray[top];
        top--;
    }
}

//***************************************************
// Member function isFull returns true if the stack *
// is full, or false otherwise.                     *
//***************************************************
template <class T>

bool IntStack <T> ::isFull() const
{
    bool status;

    if (top == stackSize - 1)
        status = true;
    else
        status = false;

    return status;
}

//****************************************************
// Member funciton isEmpty returns true if the stack *
// is empty, or false otherwise.                     *
//****************************************************
template <class T>

bool IntStack <T> ::isEmpty() const
{
    bool status;

    if (top == -1)
        status = true;
    else 
        status = false;

    return status;
}

int main(){
    IntStack <int> stack(5) ;
    
    stack.push(5);
    stack.push(6);
    stack.push(7);

    int num;
    stack.pop(num);
    cout  << "Demonstrating with integer value: \n The  last element is : " << num <<endl ;

    IntStack <double> stack1(5) ;
    stack1.push(5.1);
    stack1.push(6.3);
    stack1.push(8.8);

    double num1;
    stack1.pop(num1);
    cout  << "Demonstrating with double value: \n The  last element is : " << num1 << endl ;

    IntStack <string> stack2(5) ;
    stack2.push("sajal");
    stack2.push("hency");
    stack2.push("kuikel");

    string str1;
    stack2.pop(str1);
    cout  << "Demonstrating with string value: \n The  last element is : " << str1 << endl ;

}