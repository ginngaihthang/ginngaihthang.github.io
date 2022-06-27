#include<iostream>
using namespace std;
int main(){
    int num,sum;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"The sum of digit of "<<num<<" : ";
    while(num%10 != 0){
        sum = sum + (num%10);
        num = num/10;
    }
    cout<<sum;







    return 0;
}
