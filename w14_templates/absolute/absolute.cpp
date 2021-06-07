#include<iostream>
using namespace std;

template < class T >

T absoluteValue(T a)
{
	return (a > 0 ? a : a * -1);
}

int main()
{
	int x,y;
	cout << "this program returns the absolute value.\n"
	<< "****************************************************\n\n";
	cout << "enter a positive number : ";
	cin >> x;
	cout << "enter a negative number : ";
	cin >> y;
	cout << "absolute value of " << x << " is : " << absoluteValue(x) <<endl;
	cout << "absolute value of " << y << " is : "<< absoluteValue(y) << endl;
	return 0;
}