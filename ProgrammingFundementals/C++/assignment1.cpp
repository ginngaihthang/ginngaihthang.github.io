#include<iostream>
using namespace std;
int main(){
    int Amount;
    int Rate;
    int Month;

    cout<<"Enter loan amount :";
    cin>>Amount;
    cout<<"Enter rate :";
    cin>>Rate;
    cout<<"Enter number of month : ";
    cin>>Month;

    int rate = Amount * Rate /100;
    int month = ((Amount*Rate)/100)*Month;

    cout<<"Monthly Interest : "<<rate;
    cout<<"\nYour Interest is : "<<month;




    return 0;
}

