#include <string>
#include <iostream>
#ifndef PUBLICATION_H
#define PUBLICATION_H

using namespace std;

class Publication{
    private:
        string title;
        float price;
    public: 
        Publication(){

        }
        virtual void getData(){
            cout << "Enter title: \n";
            cin >> title;  
            cout << "Enter price: \n";
            cin >> price;  
        }
        void putData(){
            cout << "Title = " << title <<endl;  
            cout << "Price = " << price <<endl;  
        }
};


#endif