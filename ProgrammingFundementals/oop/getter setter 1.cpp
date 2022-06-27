#include<iostream>
using namespace std;
class Product{

private:
    int barCode;
    string name;
    float price;
public:
    Product(){

    }
    Product(int code,string name,float price){
        setBarCode(code);
        setName(name);
        setPrice(price);
    }
/// getter /setter
    void setBarCode(int bCode){
        if(bCode >= 1000 && bCode <=9999){
            this->barCode = bCode;
        }
        else{
            this->barCode = 0;
            cout<<"\nIncorrect bar code number\n";
        }
    }
    int getBarCode(){

        return this->barCode;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        if(this->name == ""){
            return "Name is empty!!!";
        }
        else{
            return this->name;
        }
    }
    void setPrice(float _price){
        if(_price < 100){
            this->price = 0;
            cout<<"\nPrice must be at least 100 ks\n";
        }
        else{
            this->price = _price;
        }
    }
    float getPrice(){
        return this->price;
    }
    void showData(){
        cout<<"\n\n_________Ingformation________\n";
        cout<<"Barcode: "<<getBarCode();
        cout<<"\nName: "<<this->getName();
        cout<<"\nPrice: "<<getPrice();
    }
};
int main(){

    int pCode;
    string pName;
    float pPrice;
    Product prod1 = Product();

    cout<<"Enter bar Code: ";
    cin>>pCode;

    prod1.setBarCode(pCode);


    cout<<"\nEnter product Name: ";
    cin>>pName;

    prod1.setName(pName);

    cout<<"\nEnter product price: ";
    cin>>pPrice;

    prod1.setPrice(pPrice);

    prod1.showData();

    Product prod2 = Product (1111,"",6500);

    cout<<"\n______Another Product__________\n\n";
    cout<<"BarCode: "<<prod2.getBarCode();
    cout<<"\nName: "<<prod2.getName();
    cout<<"\nPrice: "<<prod2.getPrice()<< " ks. ";

    return 0;
}
