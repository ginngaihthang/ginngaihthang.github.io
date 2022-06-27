#include<iostream>
using namespace std;
int main(){
    int price,quantity;
    cout<<"Enter price: ";
    cin>>price;
    cout<<"Enter quantity";
    cin>>quantity;

    int total = price * quantity;
    int discount = total - ((total / 100)* 10);
    if(price*quantity >= 5000){
        cout<<"Total expense :"<<discount;
    }
    else{
        cout<<"Total expense : "<<total;
    }
    return 0;

}

