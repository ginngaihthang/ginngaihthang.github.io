 #include<iostream>
using namespace std;
bool checkLogin(string,string);
int main(){
    string email,password;
    cout<<"Enter email: ";
    cin>>email;
    cout<<"Enter password: ";
    cin>>password;

    /// bool result = checkLogin (email,password);
    if(checkLogin(email,password)== 1){
        cout<<"\nLogin success...\n";
    }
    else{
        cout<<"\nLogin fail...\n";
    }

    return 0;
}
bool checkLogin(string email,string pass){
    /*if(email == "mmit@gmail.com" && pass == "123")
        return true;
    else
        return false;*/
        return(email == "mmit@gmail.com" && pass == "123") ? true : false;
}
