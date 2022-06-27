#include<iostream>
using namespace std;
class Person{
private:
    string name;
public:
    void getData(){
        cout<<"\nName: ";
        getline(cin,name);

    }
    void display(){
        cout<<"Name: "<<name<<"\n";
    }
};
class Employee : public Person{
private:
    int salary;
    string company;
public:
    void getData(){
        Person::getData();
        cout<<"Company name: ";
        cin>>company;
        cout<<"Salary: ";
        cin>>salary;
        cin.ignore();
    }
    void display(){
        Person::display();
            cout<<"Company name: "<<company;
            cout<<"\nSalary: "<<salary<<" ks.\n";

    }
};
class Programmer : public Employee{
private:
    string skillsets;
public:
    void getData(){
        Employee::getData();
        cout<<"Enter skillsets: ";
        getline(cin,skillsets);
    }
    void display(){
        Employee::display();
        cout<<"Skill sets: "<<skillsets<<"\n";
    }

};
int main(){
    Programmer obj = Programmer();
    obj.getData();
    obj.showData();
    return 0;
}
