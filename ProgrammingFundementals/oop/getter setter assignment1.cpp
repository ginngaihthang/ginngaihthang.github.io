#include<iostream>
using namespace std;
class Employee{
private:
    int empno;
    string empRank;
    string department;
    int empSalary;
public:
    void setEmployeeNo(int empno){
        if(empno == 0){

            this->empno = 0;
            cout<<"Employee number is incorrect";
        }
        else
            this->empno = empno;
    }
    int getEmployeeNo(){
        return this->empno;
    }
    void setEmployeeRank(string empRank){
        this->empRank = empRank;
    }
    string getEmployeeRank(){
        return this->empRank;
    }
    void setDepartment(string department){
        this->department = department;
    }
    string getDepartment(){
        return this->department;
    }
    void setEmployeeSalary(int salary){
        if(salary < 200000){
            this->empSalary = 0;
            cout<<"Employee Salary must be at least 200000ks.\n";
        }
        else
            this->empSalary = salary;
    }
    int getEmployeeSalary(){
        return empSalary;
    }
    void dataInitialize(int empno,string empRank,string department,int empSalary){
        this->empno = empno;
        this->empRank = empRank;
        this->department = department;
        this->empSalary = empSalary;
    }
    void showData(){
        cout<<"\n";
        cout<<getEmployeeNo()<<"\t";
        cout<<getEmployeeRank()<<"\t";
        cout<<getDepartment()<<"\t";
        cout<<getEmployeeSalary()<<"\t";
    }
};
int main(){
    Employee employee[5];
    int no;
    string emprank;
    string department;
    int salary;

    ///initialize
    for(int i = 0;i < 5;i++){
        cout<<"Enter employee number : ";
        cin>>no;
        cout<<"Enter employee rank : ";
        cin>>emprank;
        cout<<"Enter employee department : ";
        cin>>department;
        cout<<"Enter employee salary : ";
        cin>>salary;

        employee[i].setEmployeeNo(no);
        employee[i].setEmployeeRank(emprank);
        employee[i].setDepartment(department);
        employee[i].setEmployeeSalary(salary);

        cout<<"\n";
    }
    /// display
    cout<<"\n\n__________ Employee Information _________\n\n";
    cout<<"EmpNmber\t EmpRank\t EmpDepartment\t EmpSalary";
    for(int i = 0;i < 5;i++){
        employee[i].showData();
    }

    return 0;
}
