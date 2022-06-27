#include<iostream>
using namespace std;
class Student{
private:
    int studentNo;
    string studentName;
    string studentClass;
public:
    Student(){
        studentNo = 0;
        studentName = studentClass = "";
    }
    void setStudentNo(int sno){
        if(sno == 0){
            this->studentNo = 0;
            cout<<"\nStudent number doesn't have!!";
        }
        else
            this->studentNo = sno;
    }
    int getStudentNo(){
        return this->studentNo;
    }
    void setStudentNa(string sna){
        this->studentName = sna;
    }
    string getStudentNa(){
        return this->studentName;
    }
    void setStudentClass(string _sclass){
        this->studentClass = _sclass;
    }
    string getStudentClass(){
        return this->studentClass;
    }
    void dataInit(int studentno,string studentname,string studentclass){
        this->studentNo = studentno;
        this->studentName = studentname;
        this->studentClass = studentclass;
    }
    void showData(){
        cout<<getStudentNo()<<"\t";
        cout<<getStudentNa()<<"\t";
        cout<<getStudentClass()<<"\t";
        cout<<"\n";
    }
    bool searchStudent(string name){
        if(this->studentName == name){
            return true;
        }
        else{
            return false;
        }
    }

};
int main(){
    Student student[5];
    int sno;
    string sname;
    string sclass;

    ///initialize
    for(int i = 0;i < 5;i++){
        cout<<"Enter Student rollnumber: ";
        cin>>sno;
        cin.ignore();
        cout<<"Enter student name: ";
        getline(cin,sname);
        cout<<"Enter student class: ";
        cin>>sclass;

        student[i].setStudentNo(sno);
        student[i].setStudentNa(sname);
        student[i].setStudentClass(sclass);
        cout<<"\n";
    }
    ///showdata
    cout<<"\n________Student Information_________\n";
    cout<<"Rollnumber\t Name\t Class\n";
    for(int i = 0;i < 5;i++){
        student[i].showData();
    }

    cout<<"\n";
    /// search student with name
    userInput: cout<<"Enter student name to search: ";
    cin>>sname;
    int index = -1;
    for(int i = 0;i < 5;i++){
        if(student[i].searchStudent(sname)){
            index = i;
            break;
        }

    }
    if(index == -1){
        cout<<"\""<<sname<<"\" is not found!\n";
    }
    else{
        cout<<"Student rollnumber: "<<student[index].getStudentNo();
        cout<<"\nStudent class: "<<student[index].getStudentClass();
    }
    char ch;
    cout<<"\n Do you want to continue?";
    cout<<"\nIf you want to contine, press 'y': ";
    cin>>ch;
    if(ch == 'y')
        goto userInput;

    return 0;
}
