#include<iostream>
using namespace std;
int main(){
    float bmi;

    cout<<"Enter your bmi value: ";
    cin>>bmi;

    if (bmi < 18.5){
        cout<<"Underweight\n";
    }
    else{
        if(bmi >= 18.5 && bmi <24.9){
            cout<<"Normal weight\n";
        }
        else{
            if(bmi >= 25 && bmi<= 29.9){
                cout<<"Overweight\n";
            }
            else{
                cout<<"Obesity\n";
            }
        }
    }

    return 0;
}
