#include<iostream>
using namespace std;
class Person{
protected:
    string name;
    string nrcno;
public:
    void initData(string name,string nrc){
    this->name = name;
    this->nrcno = nrc;
    }
    void  showData(){
        cout<<"\nName: "<<name;
        cout<<"\nNrcno : "<<nrcno;
        cout<<"\n";
    }

};
class Student : public Person{
private:
    int rno;
public:
    Student(int rno,string name,string nrc){
        this->rno = rno;
        initData(name,nrc);
    }
    void showData(){
        cout<<"\nRno: "<<rno;
        Person::showData();
    }
    void attend (){
        cout<<"\nI am attending 5th year.\n";

    }
};
class Programmer : public Person{
private:
    string skillsets;
public:
    void setSkillsets(string skill){
        this->skillsets = skill;
    }
    void viewSkillsets(){
        cout<<"\nHello , I am programmer. I am skillful in this language";
        cout<<"\n\n"<<skillsets<<"\n";
    }
};
int main(){

    cout<<"\n__________ Student _______\n";
    Student obj1 = Student(10,"Jeon","12)/askhana(n)12345");
    obj1.attend();
    obj1.showData();


    cout<<"________ Programmer ____________\n";
    Programmer obj2 = Programmer();
    obj2.setSkillsets("html,css,mysql,c++,python");
    obj2.initData("Cherry","10/sakhana(n)482448");
    obj2.viewSkillsets();
    obj2.showData();

    return 0;
}
