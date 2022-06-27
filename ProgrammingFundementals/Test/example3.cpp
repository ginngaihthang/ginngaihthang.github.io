#include<iostream>
using namespace std;
int main(){
    int num,num1;
    cout<<"Enter numbers you want to type: ";
    cin>>num;
    int count_pos = 0,count_neg = 0,count_zero = 0;
    for(int i = 0;i < num;i++){
        cout<<"Enter any number: ";
        cin>>num1;
        cout<<"\n";
        if(num1 > 0)
            count_pos++;
        else if(num1 < 0)
            count_neg++;
        else if(num1 == 0)
            count_zero++;
    }

    cout<<"Number of zero: "<<count_zero++;
    cout<<"\nNumber of positive: "<<count_pos++;
    cout<<"\nNumber of negative: "<<count_neg++;

    return 0;
}
