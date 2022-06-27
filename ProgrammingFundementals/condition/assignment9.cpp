#include<iostream>
using namespace std;
int main(){
    int start_num,end_num;
    cout<<"Enter start number: ";
    cin>>start_num;
    cout<<"Enter end number: ";
    cin>>end_num;

    cout<<"The number is divisible by 8 and 5: ";
    int i = start_num;
    while(i <= end_num){
            if(i%8 == 0 && i%5 == 0){
                cout<<"\n"<<i;
            }
            i++;
    }

    cout<<"\nThe number is divisible by only 8: ";
    int j = start_num;
    while(j <= end_num){
        if(j%8 == 0){
            cout<<"\n"<<j;
        }
        j++;
    }

    cout<<"The number is divisible by only 5: ";
    int k = start_num;
    while(k <= end_num){
        if(k%5 == 0){
            cout<<"\n"<<k;
        }
        k++;
    }

    cout<<"\nThe number is not divisible by 8 and 5: ";
    int m = start_num;
    while(m <= end_num){
        if(m%8 == 1 || m%5 == 1){
            cout<<"\n"<<m;
        }
        m++;
    }
    return 0;
}
