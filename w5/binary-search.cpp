#include <iostream>
using namespace std;


// for binary search, array elements must be sorted
int binarySearch(int array[], int size, int value)
{
    int first = 0, // First array element
    last = size - 1, // Last array element
    middle, // Mid point of search
    position = -1; // Position of search value
    bool found = false; // Flag
    while (!found && first <= last)
    {
    middle = (first + last) / 2; // Calculate mid point
    if (array[middle] == value) // If value is found at mid
    {
    found = true;
    position = middle;
    }
    else if (array[middle] > value) // If value is in lower half
    last = middle - 1;
    else
    first = middle + 1; // If value is in upper half
    }
    return position;
} 

int main(){

    //success case: for sorted array
    int list[5] = {1,2,3,4,5}; 
    cout << binarySearch(list, 5, 5); //returns 4 ( 4th position)
    
    //failure case : for unsorted array
    int list[5] = {1,2,6,4,5}; 
    cout << binarySearch(list, 5, 5); //returns -1 

    return 0;

}

