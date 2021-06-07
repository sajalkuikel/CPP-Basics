#include <iostream>
#include <string>

#include "DynStack.h"
#include "Inventory.cpp"

using namespace std;


int main(){
    int serialNum;
    string manufactDate;
    int lotNum;
    DynStack <Inventory> stack;    
    
    int choice; 
    char repeat;
        
    do{
        cout  << "What do you want? \n"<< 
                "Add a part to inventory (1) \n "<<
                "Take a part from inventory (2) \n ";
        cin >> choice;

        if(choice==1){
            cout <<"Enter serial num: " ;
            cin >> serialNum;
            cout << "Enter manufacture date: "; 
            cin >> manufactDate;
            cout << "Enter lot number: "; 
            cin >> lotNum;

            Inventory inv (serialNum, manufactDate,lotNum);
            stack.push(inv);
            cout  << "Successfully added to the inventory !" <<endl;
        }
        else if(choice==2){
            Inventory inv1;
            stack.pop(inv1);
            cout  << "serial num : " << inv1.getSerialNum()  << endl;
            cout  << " Date : " << inv1.getManufactDate()  << endl;
            cout  << "Lot number : " << inv1.getLotNum()  << endl;

        }
        else if (choice ==3) {
            cout << "Byeee";
            exit(0);
        }
        else{
            cout <<"NO NO!  Only 1 , 2 and 3 "<<endl;
        }
        cout  << " Do you want to enter again ? (Y / N ) " << endl;
        cin >> repeat ;
        
    }
    while(repeat ==  'Y' );
    

}           