#include<iostream>
using namespace std;

int addNumbers(int a,int b = 20,int c = 100){
    return (a + b + c);
}
int main(){
    int n1,n2,n3;
    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;

    cout<<"\n1 argument passed: "<<addNumbers(n1);
    cout<<"\n2 argument passed: "<<addNumbers(n1,n2);
    cout<<"\n3 argument passed: "<<addNumbers(n1,n2,n3);


    return 0;
}
