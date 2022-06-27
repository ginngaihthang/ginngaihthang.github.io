#include<iostream>
using namespace std;
int main(){
    int num;
    string result;
    cout<<"Enter a number: ";
    cin>>num;

    result = (num%2 == 0) ? "Even" : "Odd";

    cout<<result;

    return 0;

}
