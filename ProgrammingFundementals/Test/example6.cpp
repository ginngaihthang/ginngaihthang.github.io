#include<iostream>
using namespace std;
int main(){
    int num,sum;
    cout<<"Enter number: ";
    cin>>num;
    do{
        sum = sum + num%10;
        num= num/10;
    }
    while(num%10 != 0);
    cout<<sum;

    return 0;
}
