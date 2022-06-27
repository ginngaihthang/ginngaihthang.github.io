#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int height;
    cout<<"Enter height of tree: ";
    cin>>height;
    int row = 0;
    while (row < height){
        int j = 0;
        while (j < height-row){
            cout<<setw(9);
            j++;
        }
        int k = 0;
        while (k<2*row+1){
            cout<<"*";
            k++;
        }
        cout<<"\n";
        row++;
    }

}
