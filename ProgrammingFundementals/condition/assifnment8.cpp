#include<iostream>
using namespace std;
int main(){
    int num,num1;

    int i = 1;
    int zeroCount = 0,posCount = 0,negCount =0;
    cout<<"How many numbers you want to type: ";
    cin>>num;
    cout<<"\n";
    if(i <= num){
            for(int i = 1;i <= num; i++){
            cout<<"\nEnter any number: ";
            cin>>num1;
            if(num1 == 0){
                zeroCount ++;
            }
            else if(num1 > 0){
                posCount ++;
            }
            else if(num1 < 0){
                negCount ++;
            }
            }
            cout<<"\nNumber of zero: "<<(zeroCount ++);
            cout<<"\nNumber of positive: "<<(posCount ++);
            cout<<"\nNumber of negative: "<<(negCount ++);
        }



    return 0;
}
