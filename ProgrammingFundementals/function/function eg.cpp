#include<iostream>
using namespace std;
string names[3];
int rollnumbers[3];
void initData(){
    cout<<"\n________Data Entry___________\n";
    for(int i = 0;i < 3;i++){
        cout<<"Enter data for student"<<(i + 1)<<":";
        cout<<"\nName: ";
        cin>>names[i];
        cout<<"Roll number: ";
        cin>>rollnumbers[i];
    }
}

void showData(){
    cout<<"\n________Student List____________\n";
    cout<<"Rno \t Name\n";
    for(int i = 0;i < 3;i++){
        cout<<rollnumbers[i]<<"\t"<<names[i];
        cout<<"\n";

    }
}
int searchStudent(int rno){
    int index = -1;
    for(int i = 0;i < 3;i++){
        if(rno == rollnumbers[i]){
            index = i;
            break;

        }
    }
    return index;
}
int main(){

    return 0;
}
