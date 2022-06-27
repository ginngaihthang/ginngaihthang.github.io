#include<iostream>
using namespace std;
class Fruit{
/// data
public:
    int price;
    string name;
/// methods
    void setData(string na,int price){
    //cout<<"Data entry";

    this->name = na;
    this->price = price;
    }
    void showData(){
        cout<<"\nName: "<<name;
        cout<<"\nprice: "<<price;
        cout<<"\n";
    }

};
int main(){

    Fruit fruit1,fruit2;

    fruit1.name = "Orange";
    fruit1.price = 300;

    cout<<"Name : "<<fruit1.name;
    cout<<"\nPrice: "<<fruit1.price;

    fruit2.setData("Banana",500);
    fruit2.showData();
    return 0;
}
