#include<iostream>
using namespace std;
class Shoe{
private:
    int id;
    string name;
    string brand;
    int price;
    string color;
    string shoeSize;
public:
    Shoe(){
        name = brand = color = shoeSize = "";
        id = price = 0;
    }
    /// 3 argument constructor
    Shoe(int id,string name,string brand){
        this->id = id;
        this->name = name;
        this->brand = brand;
    }
    /// 6 argu constructor
    Shoe(int id,string name,string brand, int price,string shoeSize,string color){
        this->id = id;
        this->name = name;
        this->brand =brand;
        this->price = price;
        this->shoeSize = shoeSize;
        this->color = color;
    }
    void initData(int id,string name,string brand, int price,string shoeSize,string color){
        this->id = id;
        this->name = name;
        this->brand =brand;
        this->price = price;
        this->shoeSize = shoeSize;
        this->color = color;

    }
    void showData(){
        cout<<"\n";
        cout<<id<<"\t"<<name<<"\t";
        cout<<brand<<"\t"<<shoeSize<<"\t";
        cout<<color<<"\t"<<price<<"ks.\n";
    }
};
int main(){
    Shoe shoe1 = Shoe();
    shoe1.initData(1111,"Hiking Book","Nike",5600,"30","Black");

    Shoe shoe2 = Shoe(2222,"High Hell","Lily",35000,"27","Purple");
    Shoe shoe3 = Shoe(3333,"Leather Sneaker","Adidas");

    cout<<"Code\t Shoe Name\t Brand\t Size\t Colot\t Price\n";
    cout<<"---------------------------------------------------\n";


    shoe1.showData();
    shoe2.showData();
    shoe3.showData();
    return 0;
}
