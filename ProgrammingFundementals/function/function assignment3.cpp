#include<iostream>
using namespace std;
string name[3];
int barCode[3];
int price[3];
 void itemInitial(){
    for(int i  = 0;i < 3;i++){
        cout<<"Enter item name: ";
        cin>>name[i];
        cout<<"Enter item varCode: ";
        cin>>barCode[i];
        cout<<"Enter item price: ";
        cin>>price[i];
        cout<<"\n";

    }

}
void showData(){
    cout<<"\n____________Item Data__________\n";
    cout<<"itemname\tItemcode\tItemprice\t\n";
    for(int i = 0;i < 3;i++){
        cout<<name[i]<<"\t"<<barCode[i]<<"\t"<<price[i];
        cout<<"\n";

    }
}
int searchItemcode(int rno){
    int index = -1;
    for(int i = 0;i < 3;i++){
        if(rno == barCode[i]){
            index = i;
            break;
        }
    }
    return index;
}

int main(){
    int choose;
    item: cout<<"\n1.Data entry";
    cout<<"\n2.Display Item";
    cout<<"\n3.Search with rno";
    cout<<"\nchoose 1,2 or 3 :";
    cin>>choose;
    if(choose == 1){
        itemInitial();
    }
    else if(choose == 2){
        showData();
    }
    else if(choose == 3){
        int rno;
        cout<<"Enter item number to search: ";
        cin>>rno;
        int result = searchItemcode( rno);
        if(result == -1)
            cout<<"Does not exist\n";
        else{
            cout<<"Item Code : "<<barCode[result];
            cout<<"Item name : "<<name[result];
            cout<<"Item price : "<<price[result];
        }
    }else
        cout<<"\nInvalid number\n";

    char ch;
    cout<<"Do you want to continue?\n";
    cout<<"If you want to continue, press 'y' : ";
    cin>>ch;
    if(ch == 'y')
        goto item;


    return 0;
}
