#include<iostream>
using namespace std;
class Account{
    /// data
public:
    string accountHolder;
    string accountNo;
    int balance;
/// actions
    void createAccount(string holder,string no, int initBal){
        accountHolder = holder;
        accountNo = no;
        balance = initBal;
    }
    void deposit(int depositAmt){
        balance = balance + depositAmt;
    }
    bool withdraw(int withdrawAmt){
        if(withdrawAmt > balance)
            return false;
        else{
            balance = balance - withdrawAmt;
            return true;
        }
    }
    void showData(){
        cout<<"\n_________Current Info________\n\n";
        cout<<"Holder name: "<<accountHolder;
        cout<<"\nAccount No: "<<accountNo;
        cout<<"\nCurrent Balance: "<<balance;
    }


};
int main(){
    Account acc1;

    acc1.createAccount("Jeon","12345678",1000000);
    acc1.showData();

    cout<<"\n__________deposit(2000000ks)_________\n";
    acc1.deposit(200000);
    cout<<"After deposit,current balance: "<<acc1.balance<<" ks\n";

    cout<<"\n_____________Withdraw(1500000ks)_________\n";
    if(acc1.withdraw(1500000)){
        cout<<"\nSuccess....\n";
        cout<<"Cuttent Balance: "<<acc1.balance;

    }
    else{
        cout<<"\nSorry Not Enough!\n";
        cout<<"Cruuent balance: "<<acc1.balance;
    }

    cout<<"\n\n_________Widthdraw(100000ks)________\n\n";
    if(acc1.withdraw(1000000)){
        cout<<"\nSuccess...\n";
        cout<<"Current balance: "<<acc1.balance;

    }
    else{
        cout<<"\nSorry Not enough!";
        cout<<"Current Balance: "<<acc1.balance;
    }

    return 0;

}
