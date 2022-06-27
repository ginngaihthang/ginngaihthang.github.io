#include<iostream>
using namespace std;
string cities[3];
void initData(){

    for(int i = 0;i < 3;i++){
        cout<<"Enter city name: ";
        getline(cin,cities[i]);
    }
}
void showData(){
    cout<<"___________All cities___________\n\n";
    for(int i = 0;i <3;i++){
        cout<<cities[i]<<"\n";
    }

}
int main(){

    cout<<"\n_________Function Calling_______\n";
    initData();
    showData();

    return 0;
}

