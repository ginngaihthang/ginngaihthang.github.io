#include<iostream>
using namespace std;
int max_num(int a ,int b , int c){
    int max_number = a;
    if(max_number < b){
        max_number = b;
    }
    if(max_number < c){
        max_number = c;
    }


    return max_number;

}

int min_num(int a ,int b , int c){
    int max_number = a;
    if(max_number > b){
        max_number = b;
    }
    if(max_number > c){
        max_number = c;
    }


    return max_number;

}
bool checkLogin(string name,string password){

    return (name == "mmit" && password == "admin123") ? true : false;
}
int main(){
    int num[3];
    for(int i = 0;i < 3;i++){
        cout<<"Enter"<<(i + 1)<<"number: ";
        cin>>num[i];
    }
    cout<<"Maximun number is "<<max_num(num[0],num[1],num[2]);
    cout<<"\nMinimun number is "<<min_num(num[0],num[1],num[2]);
    cout<<"\n";
    ///checklogin
    string name,pass;
    Tryagain: cout<<"Enter user name: ";
    cin>>name;
    cout<<"Enter user password: ";
    cin>>pass;

    bool result =checkLogin(name,pass);
    if(result == 1)
        cout<<"Login success(Valid)";
    else{
        int num;
        cout<<"Invalid";
        cout<<"\nDo you want try again ,press '0': ";
        cin>>num;
        if(num == 0)
            goto Tryagain;
    }


    return 0;
}
