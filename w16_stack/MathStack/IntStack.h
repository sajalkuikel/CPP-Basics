// Specification file for the IntStack class
#ifndef INTSTACK_H
#define INTSTACK_H

class IntStack
{
private:
   int *stackArray;  // Pointer to the stack array
   int top;          // Indicates the top of the stack

public:
   int stackSize;    // The stack size
   // Constructor
   IntStack(int);

   // Copy constructor
   IntStack(const IntStack &);

   // Destructor
   ~IntStack();
   
   int getSize() const{
      return stackSize;
   }
   
   // Stack operations
   void push(int);
   void pop(int &);
   void display()const;
   bool isFull() const;
   bool isEmpty() const;
}; 
#endif 