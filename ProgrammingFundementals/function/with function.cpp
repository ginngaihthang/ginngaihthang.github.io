#include<iostream>
using namespace std;
void checkEvenorOdd(int num){
    if(num%2 ==1)
        cout<<num<<" is odd";
    else
        cout<<num<<" is Even";
    cout<<"\n";
}
int main(){
    int num1 = 153,num2 = 844,num3 = 751;
    checkEvenorOdd(num1);
    checkEvenorOdd(num2);
    checkEvenorOdd(num2);
    return 0;
}
