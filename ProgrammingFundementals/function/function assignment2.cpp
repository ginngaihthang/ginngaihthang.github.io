#include<iostream>
using namespace std;
int discPrice(int price,int discount ){
    price = price - (price / 100)* discount;
    return price;
}
int calInterest(int amount,int interest,int month){
    interest = (amount * interest)/ 100;
    month = interest * month;
    return interest,month;
}
int calInterest(int amount,int interest){
    interest = (amount * interest)/ 100;
    return interest;
}
void countZero(){
    int num;
    int i = 1;
    int count_zero;
    cout<<"\nEnter numbers you want to type: ";
    cin>>num;
    int num1;
    if(i <= num){
        for(int i = 1;i <= num;i++){
            cout<<"\nEnter any number: ";
            cin>>num1;
            if(num1 == 0)
                count_zero++;
        }
        cout<<"Number of zero Occurences: "<<count_zero;
    }
}
int main(){
    int num1,num2;
    cout<<"Item price: ";
    cin>>num1;
    cout<<"Discount price: ";
    cin>>num2;
    cout<<"After discount price: "<<discPrice(num1,num2);

    cout<<"\n\n";
    ///calculate interest
    int n1,n2,n3;
    cout<<"Enter loan amount: ";
    cin>>n1;
    cout<<"Enter interest rate: ";
    cin>>n2;
    cout<<"Enter no of month: ";
    cin>>n3;
    cout<<"Monthly interest rate: "<<calInterest(n1,n2);
    cout<<"\nTotal interest: "<<calInterest(n1,n2,n3);
    cout<<"\n";

    ///Zero Occurences
    countZero();
    return 0;
}
