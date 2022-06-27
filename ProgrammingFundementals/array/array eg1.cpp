#include<iostream>
using namespace std;
int main(){
    /// datatype var-name[size];// declare

    /// datatype var-name[size] = {val,val}; // initialize

    int mark[5]= {90,50,53,70,80};

    int mark2[5] = {};

    int mark3[5] = {90,50,53};

    ///int mark[5] = {90,60,54,40,49,20};

    int mark5[] = {90,50,38,100,20,69};

    int rno = 10000;
    cout<<sizeof(rno)<<"bytes\n";
    cout<<"\nNo. of items in mark5 : "<<sizeof(mark5)/sizeof(int);
    return 0;
}
