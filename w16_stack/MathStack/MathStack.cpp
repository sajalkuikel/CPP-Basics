#include <iostream>
// Implementation file for the MathStack class
#include "IntStack.h"
#include "MathStack.h"
using namespace std;
//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
//***********************************************

void MathStack::add()
{
int num, sum;

// Pop the first two values off the stack.
pop(sum);
pop(num);

// Add the two values, store in sum.
sum += num;

// Push sum back onto the stack.
push(sum);
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
//***********************************************

void MathStack::sub()
{
int num, diff;

// Pop the first two values off the stack.
pop(diff);
pop(num);

// Subtract num from diff.
diff -= num;

// Push diff back onto the stack.
push(diff);
}

void MathStack::mult()
{
int num, prod;

// Pop the first two values off the stack.
pop(num);
prod = num;
pop(num);

prod *= num ;

push(prod);
}

void MathStack::div()
{
int numerator, denominator ,quotient;

// Pop the first two values off the stack.
pop(denominator);
pop(numerator);

    if ( denominator == 0) {
        throw "Cannot divide by zero"; 
    }else{
        quotient = numerator / denominator;
    }

push(quotient);
}

void MathStack::addAll() 
{
int num, sum;

for (int i = 0; i < stackSize -1 ; i++)
{
    pop(num);
    sum =num ;
    pop(num);
    sum+=num;
    
    // Push sum back onto the stack.
    push(sum);
}

}

void MathStack::multAll() 
{
int num, prod;

for (int i = 0; i < stackSize-1; i++)
{
    pop(num);
    prod = num ;
    pop(num);
    prod *= num;
    
    // Push prod back onto the stack.
    push(prod);
}

}

