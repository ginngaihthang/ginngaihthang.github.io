#include<iostream>
using namespace std;
/// call by value
void changeValue(int val){
    val = val + 20;
    cout<<"\nValue inside function: "<<val;
    cout<<"\n";
}
/// call by ref
void editValue(int *val){
    *val = *val + 20;
    cout<<"\nValue inside function: "<<(*val);
}


int main(){
    /*int num = 10;
    cout<<"\nBefore calling function,num = "<<num;
    changeValue(num);
    cout<<"After calling function, num = "<<num;
    */

    int num = 10;
    cout<<"\nBefore calling function,num = "<<num;
    editValue(&num);
    cout<<"\nAfter calling function, num = "<<num;

    return 0;
}
