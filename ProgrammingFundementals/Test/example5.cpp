#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int siz;
    cout<<"Enter size of table: ";
    cin>>siz;
     cout<<setw(9);
    for (int i = 1;i <= siz;i++){
            cout<<i<<setw(5);
    }
    cout<<"\n";
    cout<<setw(4)<<"+";
    for(int i = 1;i <=siz;i++){
        cout<<"-----";
    }
    cout<<"\n";

    for(int col= 1;col <= siz;col++){
        cout<<setw(3)<<col<<"|";
        for (int row = 1;row <= siz;row++){
            int product=col*row;
            cout<<setw(5)<<product;
        }
        cout<<"\n";
    }
}
