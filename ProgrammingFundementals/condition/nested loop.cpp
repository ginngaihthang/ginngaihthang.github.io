#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter start number: ";
    cin>>num1;
    cout<<"Enter end number: ";
    cin>>num2;
     for(int i = 1;i <= 10;i++){/// loop multiply 1 ~ 10
        for(int j = num1;j <= num2;j++){/// for start `~ end
            cout<<j<<" * "<<i<<" = "<<(j * i)<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}
