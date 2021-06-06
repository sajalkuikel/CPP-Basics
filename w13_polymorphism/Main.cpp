#include <iostream>
#include <string>

#include "Publication.h"
#include "Book.h"
#include "Tape.h"

using namespace std;

int main(){
    Tape t;
    Publication *publication1 = &t;
    cout << "** Enter Tape info ** " <<endl;
    publication1->getData();
    
    Book b;
    Publication *publication2 = &b;
    cout << "** Enter  Book info ** " <<endl;
    publication2->getData();


    cout << "Here is the tape info : "<< endl;
    publication1->putData();
    cout << "Here is the book info : "<< endl;
    publication2->putData();


    return 0;
}