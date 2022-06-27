#include<iostream>
using namespace std;
int main(){
    string name,password;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter password: ";
    cin>>password;

    if(name == "mmit" && password == "admin123" ){

        cout<<"log in success";
    }
    else {
        if(name != "mmit" || password != "adim123"){
            if(name != "mmit"){
                cout<<"User name is incorrect";
            }
            if(password != "admin123"){
                cout<<"\nUser password is incorrect";
            }
        }

    }
    return 0;
}

