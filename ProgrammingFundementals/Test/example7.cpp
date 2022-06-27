#include<iostream>
using namespace std;
class Employee{
protected:
    int empno;
    string empRank;
    string department;
    int salary;
public:
    void setEmpoyeeNo(int empno){
        this->empno= empno;
    }
    int getEmployeeNo(){
        return empno;
    }
    void setEmpRang(string empRank){
        this->empRank = empRank;
    }
    string getEmpRang(){
        return empRank;
    }
    void setEmpDepartment(string department){
        this->department = department;
    }
    string getEmpDepartment(){
        return department;
    }
    void setSalary(int salary){
        this->salary = salary;
    }
    int getSalary(){
        return salary;
    }
    void initData(int empno,string Rank,string depart,int salary){
        this->empno = empno;
        this->empRank = Rank;
        this->department = depart;
        this->salary = salary;
    }
    void showData(){
        cout<<empno<<"\t"<<empRank<<"\t"<<department<<"\t"<<salary<<"\n";
    }
};
int main(){
    Employee employee[5];
    int no;
    string dapart,Rank;
    int salary;

    for(int i = 1;i < 5;i++){
        cout<<"Enter employee number: ";
        cin>>no;
        cout<<"Emter employee Rank: ";
        cin>>Rank;
        cout<<"Enter employee department: ";
        cin>>dapart;
        cout<<"Enter employee salary: ";
        cin>>salary;

        employee[i].initData(no,Rank,dapart,salary);

    }
    for(int i = 0;i < 5;i++){
        employee[i].showData();
    }


    return 0;
}
