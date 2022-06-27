#include<iostream>
using namespace std;
///global place
int a = 10;
void display(){
    ///inside fun(local variable)
    int a = 20;
    cout<<"\nValue of a inside fun: "<<a;
}
void displayAnother(int a) {/// parameter(int a = 30
    cout<<"\nValue of a inside fun parameter: "<<a;
}
int main(){

    cout<<"Value of a: "<<a;
    display();/// function calling statement;
    displayAnother(30);
    return 0;

}

