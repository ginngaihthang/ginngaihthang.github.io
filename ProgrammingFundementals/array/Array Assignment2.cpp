#include<iostream>
using namespace std;
int main(){
    int len = 4;
    int barCode[4],itemPrice[4];
    string itemName[4];


    for(int i = 0;i < len;i++){
        cout<<"Enter data for store"<<(i + 1);
        cout<<"\nEnter varCode: ";
        cin>>barCode[i];
         cout<<"Enter Item name: ";
        cin>>itemName[i];
        cout<<"Enter Item Price: ";
        cin>>itemPrice[i];
        cout<<"\n";
    }

    cout<<"varCode\tItemName\tItemPrice";
    cout<<"\n";
    for(int i = 0;i < len;i++){
        cout<<barCode[i]<<"\t";
        cout<<itemName[i]<<"\t";
        cout<<itemPrice[i]<<"\t";
        cout<<"\n";
    }

    for(int i = 0;i < len;i++){
        if(itemPrice[i] > 300){
            cout<<itemName[i]<<"( "<<itemPrice[i]<< "ks.)";
        }
    }
    int itemCode;
    int index = -1;
    cout<<"\nEnter barCode: ";
    cin>>itemCode;


    for(int i = 0;i < len;i++){
        if(itemCode == barCode[i]){
            index = i;
            break;
        }

    }

    if(index == -1){
        cout<<"Item Does not exist";
    }
    else{
        cout<<"BarCode: "<<barCode[index]<<"\t";
        cout<<"ItemName: "<<itemName[index]<<"\t";
        cout<<"ItemPrice: "<<itemPrice[index]<<"\t";
    }






    return 0;
}
