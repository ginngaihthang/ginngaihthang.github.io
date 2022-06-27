#include<iostream>
using namespace std;
class Product{
private:
    int barCode;
    string name;
public:
    bool setBarCode(int bCode){
        if(bCode >= 1000 && bCode <= 9999){
            this->barCode = bCode;
            return true;
        }
        else{
            this->barCode = 0;
            return false;
        }
    }
    int getBarCode(){
        return this->barCode;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
};
int main(){
    int pCode;
    string name;
    Product prod1 = Product();

    cout<<"Enter barCode; ";
    cin>>pCode;

    bool result = prod1.setBarCode(pCode);
    while (!result){
        cout<<"Enter valid BarCode: ";
        cin>>pCode;
        result = prod1.setBarCode(pCode);
    }
    cout<<"Enter product name";
    cin>>name;
    prod1.setName(name);

    cout<<"BarCode: "<<prod1.getBarCode();
    cout<<"Name: "<<prod1.getName();

    return 0;
}
