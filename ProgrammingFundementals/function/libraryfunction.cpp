#include<iostream>
#include<cctype>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){

    cout<<"____________ Function of cctype ___________\n";
    cout<<"Is alpha('9'): "<<isalpha('9');
    cout<<"\nIs alpha('A'): "<<isalpha('A');
    cout<<"\nLower case of 'A': "<<(char)tolower('A');

    cout<<"\n____________Function of cmath _____________\n";
    cout<<"3 power 5 is "<<pow(3,5);
    cout<<"\nSquare root of 81: "<<sqrt(81);
    cout<<"\nValue of sin(30): "<<sin(30);
    cout<<"\nValue of log(10): "<<log(10);

    cout<<"\n__________Function of iomanip__________\n";
    cout<<"Spring"<<setw(20)<<"Day"<<endl;
    cout<<"Love"<<setw(27)<<"yourself";


    return 0;
}
