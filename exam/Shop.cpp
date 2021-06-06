#include <iostream>
#include <string>

using namespace std;
// Function Prototypes
void showMenu();
void chooseSizeOfCupOfCup(string );
void showshowTotalCupSold(int small, int medium , int large);

int main()
{

string Size;
showMenu();
	
	cout <<"Here is the Menu  \n";
    cout << "Small : 1.75\n ";
    cout << "Medium : 1.90\n ";
    cout << "Large : 2.00\n ";
        
    cout<<"Select the size of coffee you want"<<endl;
    cin>>Size;

    chooseSizeOfCup(Size);
    system("PAUSE");
return 0;
}

void showMenu() {
    cout << "Please select the size and number of cups";		
}

void chooseSizeOfCup(string Size) {
	
	int smallCupsSold=0;
	int mediumCupSold=0;
	int largeCupSold=0;
	
	
	
	do{
		double smallCup = 0;
		double mediumCup = 0;
		double largeCup = 0;
		
		if(Size=="S"){
			cout << "Small Cup = " << 1.75 << endl;
			cout << "Select the number of cups"<<endl;
			cin>>smallCup;
            cout << "Total price " << smallCup*1.75 <<endl;
			smallCupsSold += smallCup;
		}
		else if(Size=="M"){
			cout << "Medium Cup = " << 1.90 << endl;
			cout << "Select the number of cups"<<endl;
			cin>>mediumCup;
            cout << "Total price " << mediumCup*1.9 <<endl;
			mediumCupSold += mediumCup;
		}
		else if(Size=="L"){
			cout << "Large Cup = " << 2.00 << endl;
			cout << "Select the number of cups"<<endl;
			cin>>largeCup;
            cout << "Total price " << largeCup*2.00 <<endl;
			mediumCupSold += largeCup;
		}
		
		
		cout << "\n\nWould you like a Small (S), Medium (M), or Large (L) coffee? or exit (E) " <<endl;
		cin >> Size;
		cout<<".............................................."<<endl;
		showTotalCupSold(smallCupsSold, mediumCupSold, largeCupSold);
	}
	while(Size != "E");
	
		
}


void showTotalCupSold(int small, int medium , int large){
	cout<<"Total Small Cups Sold"<<endl;
	cout<<small <<endl;
	cout<<"Total Small Cups Sold"<<endl;
	cout<<medium <<endl;
	cout<<"Total Small Cups Sold"<<endl;
	cout<<large <<endl;
}
