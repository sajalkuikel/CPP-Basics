#include <iostream>
using namespace std;

class Account
{
    private:
        double balance;
    public:
        Account()
        {
            balance = 0;
        }
        Account(double initialDeposit)
        {
            balance = initialDeposit;
        }
        double getBalance()
        {
            return balance;
        }
        // returns new balance or throws an exception if error
        double deposit(double amount)
        {
            if (amount > 0)
                balance += amount;
            else
                throw "Ammount cannot be negative, fool ! ";
            return balance;
        }
    // returns new balance or -1 if invalid amount
        double withdraw(double amount)
        {
            if ((amount > balance) || (amount < 0))
                throw "Insufficient balance or invalid entry.";
            else
                balance -= amount;
            return balance;
        }
};


int main(){
    
    
    try{
        Account a1;
        // Valid case: 
        cout << "Initial: " << a1.getBalance() <<endl;
        a1.deposit(100);
        cout << "After deposit: " << a1.getBalance()<<endl;
        a1.withdraw(90);
        cout << "After Withdrawal: " << a1.getBalance()<<endl;


        // Invalid deposit ammount
        Account a2;
        cout << "Initial: " << a2.getBalance() <<endl;
        a2.deposit(-10);
        cout << "After deposit: " << a2.getBalance()<<endl;
        a2.withdraw(90);
        cout << "After Withdrawal: " << a2.getBalance()<<endl;

        //Invalid withdrawal ammount
        Account a3;
        cout << "Initial: " << a3.getBalance() <<endl;
        a3.deposit(500);
        cout << "After deposit: " << a3.getBalance()<<endl;
        a3.withdraw(600);
        cout << "After Withdrawal: " << a3.getBalance()<<endl;

        
    }
    catch(char const* ex){
        cout << ex ;
    }


}