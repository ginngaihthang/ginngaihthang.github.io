#include<iostream>
using namespace std;
class Employee{
private:
    int empId;
    string empName;
    string empNrc;
    int empSalary;
    int empPhone;
public:

    void setEmployeeId(int id){
        if(this->empId == 0){
            this->empId = 0;
            cout<<"Employee Id is incorrect!";
        }
        else
            this->empId = id;
    }
    int getEmployeeId(){
        return this->empId;
    }
    void setEmployeeName(string na){
        this->empName = na;
    }
    string getEmployeeName(){
        return this->empName;
    }
    void setEmployeeNrc(string nrc){
        this->empNrc = nrc;
    }
    string getEmployeeNrc(string nrc){
        return this->empNrc;
    }
    void setEmployeeSalary(int salary){
        if(salary < 100000){
            this->empSalary = 0;
            cout<<"Employee salary must be least 100000ks!";
            cout<<"\n";
        }
        else
            this->empSalary = salary;

    }
    int getEmployeeSalary(){
        return this->empSalary;

    }
    void setEmployeePhone(int ph){
        this->empPhone = ph;
    }
    int getEmployeePhone(){
        return this->empPhone;
    }
    void displayData(){
        cout<<this->empName<<" => "<<empSalary;
        cout<<"\n";
    }
    int promoteData(int salary){

            return this->empSalary + salary;

    }
};
int main(){
    Employee employee[4];
    int empid;
    string empna;
    string empnrc;
    int salary;
    int phno;
    ///initdata
    for(int i = 0;i < 4;i++){
        cout<<"Enter employee Id: ";
        cin>>empid;
        cout<<"Enter employee name: ";
        cin>>empna;
        cout<<"Enter employee Nrc: ";
        cin>>empnrc;
        cout<<"Enter employee salary: ";
        cin>>salary;
        cout<<"Enter employee phone: ";
        cin>>phno;

        employee[i].setEmployeeId(empid);
        employee[i].setEmployeeName(empna);
        employee[i].setEmployeeNrc(empnrc);
        employee[i].setEmployeeSalary(salary);
        employee[i].setEmployeePhone(phno);

        cout<<"\n";
    }

    ///display
    cout<<"\n______Employee name and salary______\n";
    for(int i = 0;i < 4;i++){
        employee[i].displayData();

    }
    cout<<"\n";
    ///promote
    for(int i = 0;i < 4;i++){
        cout<<"Enter promore salary for employee"<<(i + 1)<<" : ";
        cin>>salary;
        cout<<"Promotion for employee"<<(i + 1)<<": "<<employee[i].promoteData(salary);
        cout<<"\n";
    }


    return 0;

}

