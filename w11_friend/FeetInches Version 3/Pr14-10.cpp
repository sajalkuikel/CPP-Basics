// This program demonstrates the FeetInches class's overloaded
// relational operators.
#include <iostream>
#include "FeetInches.h"
#include "FeetInches.cpp"
using namespace std;

int main()
{
   int feet, inches;  // To hold input for feet and inches

   // Create two FeetInches objects. The default arguments
   // for the constructor will be used.
   // FeetInches first;

   // // Get a distance from the user.
   // cout << "Enter a distance in feet and inches: ";
   // cin >> feet >> inches;

   // // Store the distance in first.
   // first.setFeet(feet);
   // first.setInches(inches);




   //Demonstrating copy constructor
   // FeetInches third;

   // FeetInches second(first);
   // third = first.multiply(second);
   

   // cout  << "Feet :" << third.getFeet() << endl;
   // cout  << "Inches :" << third.getInches() << endl;
   



   // Get another distance.
   // cout << "Enter another distance in feet and inches: ";
   // cin >> feet >> inches;

   // // Store the distance in second.
   // second.setFeet(feet);
   // second.setInches(inches);




// if(first >= second){
//    cout <<  " First is greater than equal to  second " << endl;
// }

// if( first <= second ){
//    cout << " First is smaller than or equal to second " << endl;
// }

// if(first>=second && first<=second){
//    cout << "These are equal" <<endl;
// }

// if( first != second ){
//    cout << "These are not equal"  << endl;
// }






   // // Compare the two objects.
   // if (first == second)
   //    cout << "first is equal to second.\n";
   // if (first > second)
   //    cout << "first is greater than second.\n";
   // if (first < second)
   //    cout << "first is less than second.\n";



   // to demonstrate tract area

      FeetInches len;
      FeetInches wid;

      cout << "Enter a lendth of track in feet and inches: ";
      cin >> feet >> inches;

      len.setFeet(feet);
      len.setInches(inches);

      cout << "Enter a width of track in feet and inches: ";
      cin >> feet >> inches;

      wid.setFeet(feet);
      wid.setInches(inches);


      LandTrack land(  len, wid);
      cout << "\n Area of the land is: " << land.area();

   return 0;
}