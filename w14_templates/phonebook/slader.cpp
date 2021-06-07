// //contents of PhoneBookEntry.h

// #ifndef PHONEBOOKENTRY_H
// #define PHONEBOOKENTRY_H
// #include <string>

// using namespace std;

// class PhoneBookEntry{
// private:
//     string name;
//     int phoneNumber;
// public:
//     //constructor with default values
//     PhoneBookEntry(string n = "", int num = 0){
//         name = n;
//         phoneNumber = num;
//     }

//     //getter functions
//     string getName() const{
//         return name;
//     }

//     int getNumber() const{
//         return phoneNumber;
//     }

//     //setter functions
//     void setName(string n){
//         name = n;
//     }

//     void setNumber(int num){
//         phoneNumber = num;
//     }
// };

// #endif



    
    
  
// 2











// //contents of main.cpp

// #include <iostream>
// #include <iomanip>
// #include <vector>
// #include "PhoneBookEntry.cpp"

// using namespace std;

// int main()
// {
//     //declare vector of PhoneBookEntry objects
//     cout << "Creating vector of PhoneBookEntry objects...\n";
//     vector<PhoneBookEntry> vec;
//     cout << "Done!\n\n";

//     //print size of vector
//     cout << "Vector size: " << vec.size() << endl;

//     //create array of 5 PhoneBookNumber objects
//     cout << "\nCreating array of 5 PhoneBookEntry objects...\n";
//     PhoneBookEntry phoneBook[5];
//     cout << "Done!\n\n";

//     //set data to objects in array
//     string entryName;
//     cout << "Setting data to entries automatically...\n";
//     for(int counter = 0; counter < 5; counter++){
//         //initialize and reset string to "Entry "
//         entryName = "Entry ";

//         //add a number to tell names apart
//         entryName += to_string(counter + 1);

//         //set this to current object's name
//         phoneBook[counter].setName(entryName);

//         //set current object's number
//         phoneBook[counter].setNumber((counter+1)*111111);
//     }
//     cout << "Done!\n\n";

//     //push values to vector
//     cout << "Now pushing values to vector ";
//     cout << "one by one in a loop...\n";
//     for(int counter = 0; counter < 5; counter++){
//         vec.push_back(phoneBook[counter]);
//     }
//     cout << "Done! Vector populated!\n\n";

//     //print size of vector as proof
//     cout << "Vector size: " << vec.size() << endl;

//     //display values of vector
//     cout << "\nNow displaying values of vector...\n";
//     cout << "Name \t\t Number\n";
//     cout << "-----------------------\n";
//     for(int counter = 0; counter < 5; counter++){
//         cout << vec[counter].getName() << " \t ";
//         cout << vec[counter].getNumber() << endl;
//     }

//     //return 0 to mark successful termination
//     return 0;
// }
