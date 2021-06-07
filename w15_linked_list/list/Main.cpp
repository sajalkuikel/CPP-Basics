#include<iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList <int> intList;
    intList.appendNode(12);
    intList.appendNode(123);
    intList.appendNode(1234);

    intList.insertNode(130);

    intList.deleteNode(130);
    intList.displayList();

    intList.insertNodeOnPosition(0, 2);
    cout << "After Insert On 2 :" <<endl;
    intList.displayList();


}