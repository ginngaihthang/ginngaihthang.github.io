#include<iostream>
using namespace std;

void checkLogin(){
    string email,pass;

    userInput: cout<<"Enter email: ";
    cin>>email;
    cout<<"Enter password: ";
    cin>>pass;

    if(email == "mmit@gmail.com" && pass == "123"){
        cout<<"\nLogin success....\n";
    }
    else{
        int num;
        cout<<"\nEmail and password do not match!\n";
        cout<<"If you want to try again, press '1': ";
        cin>>num;
        if(num == 1)
            goto userInput;
    }

}
int main(){

    cout<<"Before invoking function\n";
    checkLogin();
    cout<<"\nAfter invoking function\n";

    return 0;
}
