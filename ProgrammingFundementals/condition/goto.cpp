#include<iostream>
using namespace std;
int main(){
    string uname,upass;

    tryAgain: cout<<"Enter user name: ";
    cin>>uname;
    cout<<"Enter password: ";
    cin>>upass;

    if(uname != "mmit" || upass != "admin"){
        goto tryAgain;
    }
    cout<<"Login Success..\n";

    return 0;
}
