#include<iostream>
using namespace std;
int main(){
    int row = 2,col = 3;
    int numbers[row][col];

    /// user input
    for(int r = 0;r < row;r++){
        for(int c = 0;c < col;c++){
            cout<<"Enter data for ["<<r<<"]["<<c<<"]: ";
            cin>>numbers[r][c];

        }
    }
    /// display and find total
    cout<<"\n__________All Numbers___________\n\n";
    int total = 0;
    for(int  r = 0;r < row;r++){
        for(int c = 0;c < col;c++){
            cout<<numbers[r][c]<<"\t";
            total += numbers[r][c];
        }
        cout<<"\n";
    }
    cout<<"\nSum of all numbers: "<<total;
    cout<<"\nNo of numbers: "<<(row * col);
    cout<<"\nAverage of numbers: "<<(float)total / (row * col);

    return 0;
}
