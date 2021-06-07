#include <iostream>
#include <string>
#include <vector>
using namespace std;

class PhoneBookEntry{
    private:
        string name;
        string ph;
    public:
    PhoneBookEntry(){

    }
    PhoneBookEntry(string name, string ph){
        this->name =name;
        this->ph = ph;
    }
    string getName() const {
        return name;
    }
    string getPhone() const {
        return ph;
    }

};

int main(){

    vector<PhoneBookEntry> entries ; 
    
    PhoneBookEntry e1("Sajal Kuikel", "+0981271423");
    PhoneBookEntry e2("Ram", "+9987623");
    PhoneBookEntry e3("Shyam", "+4561423");
    PhoneBookEntry e4("Hari", "123453");
    PhoneBookEntry e5("Not Hari", "+9567893");
    
    entries.push_back(e1);
    entries.push_back(e2);
    entries.push_back(e3);
    entries.push_back(e4);
    entries.push_back(e5);


    
    for (int i = 0; i < entries.size(); i++)
    {
        cout << " Name  => " << entries.at(i).getName() ;
        cout << " ||  Phone number  => " << entries.at(i).getPhone() << endl;
    }
    
}

