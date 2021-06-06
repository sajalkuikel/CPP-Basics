// Specification file for the FeetInches class
#ifndef FEETINCHES_H
#define FEETINCHES_H
#include <iostream>
using namespace std;

// The FeetInches class holds distances or measurements 
// expressed in feet and inches.

class FeetInches
{
private:
   int feet;        // To hold a number of feet
   int inches;      // To hold a number of inches
   void simplify(); // Defined in FeetInches.cpp
public:
   // Constructor
	FeetInches(int f = 0, int i = 0)
		{ feet = f;
		  inches = i;
		  simplify(); }


   // Mutator functions
	void setFeet(int f)
		{ feet = f; }

	void setInches(int i)
		{ inches = i;
		  simplify(); }

   // Accessor functions
	int getFeet() const
		{ return feet; }
	FeetInches(const FeetInches &obj){
		
		// feetPtr = new int ;
		// inchesPtr = new int ;
		
		// *feetPtr =  *obj.feetPtr;
		feet =  obj.feet;
		inches =  obj.inches;

		// *inchesPtr =  *obj.inchesPtr;

	}
	FeetInches multiply(FeetInches fi){
		FeetInches temp;
		temp.simplify();
		temp.setFeet(feet * fi.feet);
		temp.setInches(inches * fi.inches);
		temp.simplify();
		return temp;
	}

	int getInches() const
		{ return inches; }

   // Overloaded operator functions
	FeetInches operator + (const FeetInches &); // Overloaded +
	FeetInches operator - (const FeetInches &); // Overloaded -
	FeetInches operator ++ ();					// Prefix ++
	FeetInches operator ++ (int);				// Postfix ++
	bool operator > (const FeetInches &);		// Overloaded >
	bool operator < (const FeetInches &);		// Overloaded <
	bool operator == (const FeetInches &);		// Overloaded ==
	bool operator <= (const FeetInches &);		// Overloaded ==
	bool operator >= (const FeetInches &);		// Overloaded ==
	bool operator != (const FeetInches &);		// Overloaded ==
};

class LandTrack{
	
	private : 
		FeetInches length;
		FeetInches width;

	public :
		LandTrack(FeetInches f1 , FeetInches f2){
			length = f1;
			width = f2;
		}	

		double area(){
			double l =  length.getFeet();
			l += length.getInches()/12.0;
			
			double w =  width.getFeet(); 
			w += width.getInches()/12.0;
			
			cout << "Length: " << l  <<endl;
			cout << "Width: " << w <<endl;
			return l * w;
		}
	
};

#endif