#include<iostream>
using namespace std;
class Product{
private:
    string name;
    float price;
public:
    int barCode;

    void showData(){
        cout<<"\nName: "<<name;
        cout<<"\nPrice: "<<price<<" ks.";
        cout<<"\nbarCode: "<<barCode;
    }
};
int main(){

    Product prod1;

    prod1.barCode = 1111;/// ok(public)
    ///prod1.name = "Coffee"/// error (private - cann't access outside of the class)
    ///prod1.price = 1500 error (private - cann't access outside of the class)
    prod1.showData();

    return 0;
}
