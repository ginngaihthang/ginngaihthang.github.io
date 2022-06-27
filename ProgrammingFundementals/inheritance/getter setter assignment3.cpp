#include<iostream>
using namespace std;
class Person{
protected:
    string name;
    string nrcno;
public:
    void initData(string name,string nrcno){
        this->name = name;
        this->nrcno = nrcno;
    }
    void showData(){
        cout<<"\nName: "<<name;
        cout<<"\nNrcno: "<<nrcno;
    }
};
class Student : public Person{
private:
    int rno;
public:
    void setStudent(int rno){
        this->rno = rno;
    }
    void attend(){
        cout<<"\nI am attend 5th year";
    }
};
class Programmer : public Person{
private:
    string skills;
public:
    void setProgrammer(string skills){
        this->skills = skills;
    }
    void viewSkill(){
        cout<<"\nI am skillful depelover in these languages\n";
        cout<<skills;
    }
};
int main(){

    Student obj1 = Student();
    obj1.initData("Aung Aung","sakhana(n)/1234");
    obj1.setStudent(1001);
    obj1.showData();
    obj1.attend();

    Programmer obj2 = Programmer();
    obj2.initData("Kyaw Kyaw","sakhana(na)/98876");
    obj2.setProgrammer("html,css,js,c++.phthon,mysql");
    obj2.showData();
    obj2.viewSkill();

    return 0;
}
