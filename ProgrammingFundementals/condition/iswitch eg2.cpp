#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter your grade: ";
    cin>>grade;

    bool result = true;
    switch(grade){
    case 'A':
        cout<<"Excellent\n";
        break;
    case 'B':
        cout<<"Credit\n";
        break;
    case 'C':
        cout<<"Well done\n";
        break;
    case 'D':
        cout<<"You passed\n";
        break;
    case 'E':
        cout<<"Try again";
    default:
        cout<<"Invalid grade \n";
        result == false;
    }
    if(result == 1)
    cout<<"Your grade is "<<grade;
    return 0;



}

