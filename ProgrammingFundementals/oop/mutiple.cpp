#include<iostream>
using namespace std;
class Student{
private:
    int rno;
public:
    void entroll(){
        cout<<"\nI have to enrool any subjcet...\n";

    }
    void payTytionFees(int fees){
        cout<<"I have to pay tuition fees - "<<fees<<" ks.\n";
    }
};
class Instructor{
private:
    int salary;

public:
    void setSalary(int salary){
        this->salary = salary;
    }
    void teach(){
        cout<<"\nI have to teach subject...\n";
    }
    void getSalary(){
        cout<<"I get salary - "<<salary<<"\n";
    }
};
class TeachingAssistant : public Instructor,public Student{
public:
    TeachingAssistant(){
    cout<<"\nI am a teaching assistant\n";
    }
};
int main(){
    TeachingAssistant obj;
    obj.entroll();
    obj.payTytionFees(60000);
    obj.setSalary(50000);
    obj.getSalary();
    obj.teach();
    return 0;
}
