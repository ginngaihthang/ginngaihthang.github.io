#include<iostream>
using namespace std;
int main(){
    int engMark,mathMark,programmingMark;

    cout<<"Enter english mark: ";
    cin>>engMark;
    cout<<"Enter math mark: ";
    cin>>mathMark;
    cout<<"Enter programming mark: ";
    cin>>programmingMark;

    cout<<"\n";
    // fail?
    if(engMark < 50)
        cout<<"\nEnglish fail("<<engMark<<" marks)";
    if(mathMark < 50)
        cout<<"\nMath fail("<<mathMark<<" marks)";
    if(programmingMark < 50)
        cout<<"\nProgramming fail("<<programmingMark<<" marks)";

    cout<<"\n";
    // pass?
    if(engMark >= 50)
        cout<<"\nEnglish Pass("<<engMark<<" marks)";
    if(mathMark >= 50)
        cout<<"\nMath Pass("<<mathMark<<" marks)";
    if(programmingMark >= 50)
        cout<<"\nProgramming Pass("<<programmingMark<<" marks)";

    cout<<"\n";
    // distinction?
    if(engMark >= 80)
        cout<<"\nEnglish got distinction";
    if(mathMark >= 80)
        cout<<"\nMath got distinction";
    if(programmingMark >= 80)
        cout<<"\nProgramming got distinction";

    // max
    string max_sub = "English";
    int max_mark = engMark;
    if(max_mark < mathMark)
        max_sub = "Math";
    if(max_mark < programmingMark)
        max_sub = "Programming";

    // min
    string min_sub = "English";
    int min_mark = engMark;
    if(min_mark > mathMark)
        min_sub = "Math";
    if(min_mark > programmingMark)
        min_sub = "Programming";

    cout<<"\n\nMaximum Subject: "<<max_sub;
    cout<<"\nMinimum Subject: "<<min_sub;

    float total = engMark + mathMark + programmingMark;

    cout<<"\n\nTotal Mark: "<<total;
    cout<<"\nAverage Mark: "<<total/3;
    return 0;
}
