#include <iostream>
using namespace std;

class Inventory{
    private:
        int serialNum;
        string manufactDate;
        int lotNum;
    
    public: 
    Inventory(){
        serialNum =0;
        manufactDate="";
        lotNum=0;
    }
    Inventory(int s, string m ,int l ){
        serialNum =s;
        manufactDate= m;
        lotNum= l;
    }
    void setSerialNum(int s ){
        serialNum =s;
    }
    void setManufactDate(int m ){
        manufactDate =m;
    }
    void setLotNum(int l ){
        lotNum =l;
    }

    int getSerialNum( ){
        return serialNum ;
    }
    string getManufactDate(){
        return manufactDate;
    }
    int getLotNum( ){
        return lotNum ;
    }

};


