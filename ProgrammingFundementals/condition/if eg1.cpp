#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num; /// num = 6

    if (num >= 0 && num <= 9){/// 6 >=0
        cout<<"You entered one digit\n"<<num;
    }

    return 0;

}
