#include<iostream>
using namespace std;
class Animal{
protected:
    string name;
    int leg;
public:
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
    void setLeg(int  leg){
        this->leg = leg;
    }
    int getLeg(){
        return this->leg;
    }
    void eat(){
        cout<<"\nI can eat!\n";
    }
    void sleep(){

        cout<<"\nI can sleep!\n";
    }
};
class Brid : public Animal{
private:
    int wings;
///protected: string name; int leg
public:
    int getWings(){
        return this->wings;
    }
    void initData(string name,int legs,int wings){
        this->wings = wings;
        this->name = name;
        this->leg = legs;

    }
    void fly(){

        cout<<"\nI can fly";
    }
};
class Elephant : public Animal{
private:
    int tail;
public:
    void setTail(int tail){
        this->tail = tail;
    }
    void swim(){
        cout<<"\nI can swim!\n";
    }
    void showInfo(){
        cout<<"\n_______Elephat Info________\n";
        cout<<"Name: "<<getName();
        cout<<"\nNo. of legs: "<<Animal::getLeg();
        cout<<"\nNo. of tail: "<<this->tail;
    }
};
int main(){

    Brid obj1 = Brid();

    obj1.initData("Parrot",2,2);
    cout<<"\n________Brid Ingo__________\n";
    cout<<"Name: "<<obj1.getName();
    cout<<"\nNo. of wings: "<<obj1.getWings();
    cout<<"\nNo. of legs: "<<obj1.getLeg();

    /// elephant
    Elephant obj2 = Elephant();
    obj2.setName("Thandar");
    obj2.setLeg(4);
    obj2.setTail(1);
    obj2.showInfo();


    return 0;
}
