#include<iostream>
using namespace std;
int main(){
    int empId;
    int salary;
    string name;
    string address;
    float bonus;

    /// userinput
    cout<<"Enter emp no : ";
    cin>>empId;
    cin.ignore();
    cout<<"Enter employee name : ";
    /// cin>>name;
    getline(cin,name);
    cout<<"Enter address : ";
    getline(cin,address);
    cout<<"Enter salary : ";
    cin>>salary;
    cout<<"Enter bonus; : ";
    cin>>bonus;

    cout<<"\n____________Employee Information______________";
    cout<<"Id: "<<empId;
    cout<<"\nName: "<<name;
    cout<<"\nSalary: "<<salary;
    cout<<"\nAddress: " <<address;
    cout<<"\nBonus: " <<bonus;
    return 0;
}
