#include<iostream>
using namespace std;

void display(char ch = '*', int no = 3){
    for(int i =0;i < no;i++){
        cout<<ch<<" ";
    }
    cout<<"\n";
}
int main(){

    cout<<"No argument passed: \n";
    display();
    cout<<"1 argument passed: \n";
    display('$');
    cout<<"2 argument passed: \n";
    display('#', 10);

    return 0;
}
