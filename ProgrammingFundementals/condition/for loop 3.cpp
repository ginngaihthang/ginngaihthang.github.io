#include<iostream>
using namespace std;
int main(){
    int start_num,end_num;
    int total = 0;
    int count_val = 0;

    cout<<"Enter start number: ";
    cin>>start_num;
    cout<<"Enter end number: ";
    cin>>end_num;

    for(int i = start_num; i <=end_num;i++){
        total = total + i;
        count_val += 1;
    }
    cout<<"Sum: "<<total;
    cout<<"\nTotal number: "<<count_val;
    cout<<"\nAverage: "<<(total/(float)count_val);

    return 0;
}

