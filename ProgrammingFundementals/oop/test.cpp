#include<iostream>
using namespace std;
class SaleRecord{
public:
    string itemName;
    double unitPrice;
    int itemQty;
    void addSaleRecord(string name,double price,int qty){
        itemName = name;
        unitPrice = price;
        itemQty = qty;
    }
    double getSubTotal(){
        return unitPrice * itemQty;
    }
    void showData(){

        cout<<itemName<<"\t";
        cout<<unitPrice<<"ks.\t";
        cout<<itemQty<<"\t";
        cout<<getSubTotal()<<"\t";
        cout<<"\n";
    }
};
int main(){
    SaleRecord sale1,sale2,sale3;
    cout<<"____show data_____\n";
    sale1.addSaleRecord("juri",3000,5);
    sale2.addSaleRecord("humbger",4000,1);
    sale3.addSaleRecord("pizza",6000,6);

    cout<<"itemname\titemprice\titemQty\tTotal\n";
    sale1.showData();
    sale2.showData();
    sale3.showData();

    return 0;
}
