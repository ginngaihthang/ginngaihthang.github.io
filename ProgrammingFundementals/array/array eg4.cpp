#include<iostream>
using namespace std;
int main(){

    int mark[3] = {100,70,90};

    cout<<"\n__________All marks___________\n\n";
    for(int i = 0; i < 3;i++){
        cout<<"mark["<<i <<"]= "<<mark[i];
        cout<<"\n";
    }

    string names[4] = {"Aung Aung","Nilar","Honey","JK"};

    cout<<"\n________All Names__________\n\n";
    int i = 0;
    while(i < 4){
        cout<<names[i]<<"\n";
        i++;
    }


    return 0;
}
