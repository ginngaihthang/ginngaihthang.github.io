#include<iostream>
using namespace std;
int main(){
    int numbers[2][3] = {
                        {
                            100,50,90
                        },
                        {
                            50,40,100
                        }
                    };
    /// find total in each column
    for (int c = 0;c < 3;c++){
        int total = 0;
        for(int r = 0;r < 2;r++){
            total += numbers[r][c];
        }
        cout<<"\nSum of "<< (c + 1)<<" column is "<<total;
    }

    return 0;
}
