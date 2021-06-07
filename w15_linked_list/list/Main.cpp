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


}