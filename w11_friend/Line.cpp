#include<iostream>
using namespace std;

class Line {

    private:
        int *ptr;
    public:
        Line(int len);
        Line(const Line &obj);
        int getLength(void);
        ~Line();
};

Line::Line(int len){
    cout << "Normal constructore allocating ptr" << endl;
    *ptr = len;
}
Line::Line(const Line &obj){
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int ;
    *ptr=  *obj.ptr; //copy the value
}
Line::~Line(void){
    cout << "Freeing memory!" << *ptr <<endl;
    delete ptr;
}

int Line::getLength(void){
    return *ptr;
}

void display(Line obj){
    cout << "Length of line : " <<  obj.getLength() << endl;
}


int main(){
    Line line(10);
    display(line);
    return 0;
}