#include <string>
#include <iostream>
#include "Publication.h"
#ifndef BOOK_H
#define BOOK_H

using namespace std;

class Book :public Publication{
    private:
        int page;
    public: 
        Book(){

        }
        void getData(){
            Publication::getData();
            cout << "Enter page count :  \n";
            cin >> page;
        }
        void putData(){ 
            Publication::putData();
            cout << "Page count is: " << page <<endl;
        }
};


#endif