#include<iostream>
using namespace std;
int main(){
    int Engmark,Mathmark,Progmark;

    cout<<"Enter English Mark: ";
    cin>>Engmark;
    cout<<"Enter Math Mark: ";
    cin>>Mathmark;
    cout<<"Enter Programming Mark: ";
    cin>>Progmark;

    if(Engmark < 50)
        cout<<"English Fail ("<<Engmark<<"marks)";
    if(Mathmark < 50)
    cout<<"\nMath Fail ("<<Mathmark<<"marks)";
    if(Progmark < 50)
        cout<<"\nProgramming Fail ("<<Progmark<<"marks)";

    if(Engmark >= 50)
        cout<<"English Pass ("<<Engmark<<"marks)";
    if(Mathmark >= 50)
        cout<<"\nMath Pass ("<<Mathmark<<"marks)";
    if(Progmark >= 50)
        cout<<"\nProgramming Pass ("<<Progmark<<"marks)";

    if(Engmark >= 80)
        cout<<"English Distinction ("<<Engmark<<"marks)";
    if(Mathmark >= 80)
        cout<<"\nMath Distinction ("<<Mathmark<<"marks)";
    if(Progmark >= 80)
        cout<<"\nProgramming Distincton ("<<Progmark<<"marks)";

    string max_mark = "English";
    int max_mark = Engmark;
    if(max_mark < Mathmark)
        max_mark == "Math";
    if(max_mark < Progmark)
        max_mark == "Programming"

    string min_mark = "English"
    int min_mark = Engmark;
    if(min_mark > Mathmark)
        min_mark = "Mathmark";
    if(min_mark > Progmark)
        min_mark = "Programming"

    cout<<"Maximum Sub "<<max_mark;
    cout<<"Minimum Sub "<<min_mark;

    int total = Engmark + Mathmark + Progmark;


    cout<<"Total mark "<<toatal;
    cout<<"Average mark "<<total/3;


    return 0;
}
