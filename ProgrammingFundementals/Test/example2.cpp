#include<iostream>
using namespace std;
int main(){
    int len = 4;
    int barCode[len];
    string name[len];
    float price[len];


    for(int i = 0;i < len;i++){
        cout<<"Enter item barCode: ";
        cin>>barCode[i];
        cout<<"Enter item name: ";
        cin>>name[i];
        cout<<"Enter item price: ";
        cin>>price[i];
    }
    cout<<"\n__________All Items__________\n";
    cout<<"ItemCode\t ItemName\t ItemPrice\n";
    for(int i = 0;i < len;i++){
        cout<<barCode[i]<<"\t";
        cout<<name[i]<<"\t";
        cout<<price[i]<<"\t";
        cout<<"\n";
    }
    cout<<"\n__________Items(price > 300)________\n";
    for(int i = 0;i < len;i++){
        if(price[i] > 300){
            cout<<name[i]<<"\t"<<price[i];
        }
    }

    int index = -1;
    int num;
    userInput:cout<<"Enter barcode to search: ";
    cin>>num;
    for(int i = 0;i < len;i++){
        if(num == barCode[i]){
            index = i;
        }
    }
    if(index == -1){
         cout<<"Does not exist!";
    }
    else{
        cout<<"Code: "<<barCode[index]<<"\n";
        cout<<"Name: "<<name[index]<<"\n";
        cout<<"Price: "<<price[index];
    }

    char ch;
            cout<<num<<"Does not exist!";
            cout<<"If you want to continute,press 'y' - ";
            cin>>ch;
            if(ch == 'y')
                goto userInput;
    return 0;
}
