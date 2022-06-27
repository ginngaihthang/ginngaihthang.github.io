#include<iostream>
using namespace std;
int main(){
    int len = 5;
    int numbers[len];
    int num;
    for(int i = 0;i < 5;i++){
        cout<<"Enter number: ";
        cin>>numbers[i];

    }
    for(int i = 0;i < 5;i++){
        cout<<numbers[i];
        cout<<"\n";
    }
    cout<<"\nDivisible by 3 - ";
    for(int i = 0;i < 5;i++){
        if(numbers[i]%3 == 0){
                cout<<numbers[i];
        }
        cout<<"\n";
    }

    return 0;
}
