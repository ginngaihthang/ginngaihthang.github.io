#include<iostream>
using namespace std;
class Account{
private:
    string account_holder;
    string account_no;
    int balance;
public:
    Account(){/// 0 argument constructor(default constructor)

        cout<<"\nThis is default constructor\n";
    }
    Account(string holder,string accNo,int amt){/// 3 argument constructor
        cout<<"\nThis is 3 argument constructor\n";
        cout<<"Holder: "<<this->account_holder;
        cout<<"\nAccount Number: "<<this->account_no;
        cout<<"\nCurrent Balance: "<<this->balance<<" ks.\n";
    }
    void initializeData(string holder,string accNo,int amt){

        this->account_holder = holder;
        this->account_no = accNo;
        this->balance = amt;
    }
    void showData(){
        cout<<"\n______Account Info________\n";
        cout<<"Holder: "<<this->account_holder;
        cout<<"\nAccount Number: "<<this->account_no;
        cout<<"\nCurrent Balance: "<<this->balance<<" ks.\n";
    }

};
int main(){

    Account acc1 = Account();/// create object with o argument constructor
    Account acc2 = Account("Cherry","954449844",300000);

    acc1.initializeData("jeon","12345678",500000);

    acc1.showData();

    acc2.showData();


    return 0;
}
