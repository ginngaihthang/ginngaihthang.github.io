#include<iostream>
using namespace std;
int main(){
    int Price;
    int Discount;

    cout<<"Enter Product Price : ";
    cin>>Price;
    cout<<"Discount Value : ";
    cin>>Discount;


    int discount = Price - ((Price / 100)* Discount);

    cout<<"After discount, price : "<<discount;


}
