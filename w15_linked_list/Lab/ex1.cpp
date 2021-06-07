#include <iostream> 
using namespace std; 
struct nodeType{ 
int info; 
nodeType *link;
};
int main(){
nodeType *list, *ptr; 
list = new nodeType; 
list->info = 45;
ptr = new nodeType; 
ptr->info = 66;
ptr->link = NULL; 
list->link = ptr;
ptr = new nodeType; 
ptr->info = 91;
ptr->link = list; 
list = ptr;
ptr = new nodeType; 
ptr->info = 70;
ptr->link = list->link; 
list->link = ptr;
ptr = list;
while (ptr != NULL) {
cout << ptr->info << endl; 
ptr = ptr->link;
}
system("PAUSE"); 
return 0;
}