#include<iostream>
using namespace std;
int main(){
    int len = 4;

    int numbers[len] = {7,16,31,25};

    cout<<"\n_________Original Item Order_________\n";
    for(int i =0 ; i < len;i++){
        cout<<numbers[i]<<"\t";
    }
    cout<<"\n\n____________Reversed Order_________\n";
    for(int i = (len - 1);i >= 0;i--)
        cout<<numbers[i]<<"\t";

    return 0;
}
