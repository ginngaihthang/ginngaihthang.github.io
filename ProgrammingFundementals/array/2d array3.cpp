#include<iostream>
using namespace std;
int main(){
    int row = 2,col = 3;

    int num[row][col];

    /// user input
    for(int r = 0; r < row;r++){
        for(int c = 0; c < col;c++){/// column
            cout<<"Enter any nymber: ";
            cin>>num[r][c];

        }
    }
    /// display
    cout<<"\n___________All Elements__________\n";
    for(int r = 0;r < row;r++){
        for(int c = 0;c < col;c++){
            cout<<num[r][c]<<"\t";
        }
    }


    return 0;
}
