#include<iostream>
using namespace std;
int main(){
    int len = 5;
    int numbers[len];

    bool num = true;
    for(int i = 0;i < len;i++){
        cout<<"Enter number "<<(i + 1)<< ": ";
        cin>>numbers[i];
    }

    for(int i = 0;i < len;i++){
        cout<<numbers[i]<<"\t";
    }

    cout<<"\n";

    for(int i = 0;i < 5;i++){
            if(numbers[i]%3 == 0){
                num = true;
                cout<<"\n"<<numbers[i];
            }
    }

    if(num == 1)
        cout<<"\n is divisible by 3";

    return 0;
}
