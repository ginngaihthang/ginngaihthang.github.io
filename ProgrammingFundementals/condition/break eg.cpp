#include<iostream>

using namespace std;
int main(){

    int i = 1;
    while(i <= 10){
        i++;
        if(i == 4){
            //break;
            continue;
        }
        cout<<"Statenmt "<<i<<"\n";
    }
    cout<<"\nProgram End....\n";

    return 0;
}
