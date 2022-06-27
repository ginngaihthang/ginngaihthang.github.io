#include<iostream>
using namespace std;
int main(){
    int Days;
    cout<<"Enter number of days : ";
    cin>>Days;

    int year = Days / 365;
    //int month = Days / 12 /30;
    //int day = Days / 12 % 30;
    int month = (Days % 365 ) /30;
    int day = (Days % 365 ) % 30;

    cout<<"Years : "<<year;
    cout<<"\nMonths : "<<month;
    cout<<"\nDay : "<<day;
}
