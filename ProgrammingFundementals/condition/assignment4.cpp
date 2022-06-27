#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num > 0){
        cout<<"Positive number";
    }
    if(num < 0 ){
        cout<<"Negative number";
    }
    return 0;
}
