#include<iostream>
using namespace std;
int main(){
	string name,password;
	cout<<"Enter your name";
	cin>>name;
	cout<<"Enter your password";
	cin>>password;

	if(name == "mmit" && password == "admin123"){
		cout<<"Login success";
	}
	else{
		if(name =="mmit" || password == "admin123"){
			if(name == "mmit"){
				cout<<"Only user name is incorrect";
			}
			if(password == "admin123"){
				cout<<"Only user password is incorrect";
			}
		}
		else{
			cout<<"User name and password do not match";
		}
	return 0;
}
