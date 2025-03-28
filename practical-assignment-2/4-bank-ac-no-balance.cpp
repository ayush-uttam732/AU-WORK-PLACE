//4=> Write a C++ program to implement a class called BankAccount that has private
//member variables for account number and balance. Include member functions to
//deposit and withdraw money from the account.

#include<iostream>
using namespace std;
class bankAccount{
    private:
    int accountNumber;
    int balance;
    public:
    void set_data(){
        cout<<"Enter account number: ";
        cin>>accountNumber;
        cout<<"Enter initial balance: ";
        cin>>balance;
    }
    void get_data(){
        cout<<"Account number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl<<endl;
    }

    void deposit(){
        int amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        balance+=amount;
        cout<<"Balance after deposit: "<<balance<<endl;
    }
    void withdraw(){
        int amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        if(balance>=amount){
            balance-=amount;
            cout<<"Balance after withdraw: "<<balance<<endl;
        }else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void ask(){
        int choice;
       
        cout<<"1 for deposit"<<endl;
        cout<<"2 for withdraw"<<endl;
        cout<<"3 to exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1:
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
    
    }
}
}  ;
int main(){
    bankAccount ba;
    ba.set_data();
    ba.get_data();
    ba.ask();
    return 0;
}
