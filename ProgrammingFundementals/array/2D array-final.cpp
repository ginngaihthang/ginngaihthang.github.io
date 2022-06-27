#include<iostream>
using namespace std;
int main(){
    int row = 3,col = 4;
    string subjects[col] = {"html","javascript","database","c++"};
    string students[row] = {"aung aung","cherry","yuki"};

    int marks[row][col] = {
                        {
                           100,74,80,100
                        },
                        {
                            88,90,90,56
                        },
                        {
                            90,80,77,100
                        }
                    };

    /// find students who got javascript mark is greater than 80
    cout<<"\n______Students(javascript > 80)______\n\n";
    for(int r = 0; r < row;r++){
        if(marks[r][1] > 80){
               cout<<students[r]<<"("<<marks[r][1]<<" marks)";
               cout<<"\n";
        }
    }
    cout<<"\n______________________________\n";
    /// find max sub & min sub for each student
    for(int r = 0; r < row;r++){/// loop for student

        int max_mark = marks[r][0];
        int min_mark = marks[r][0];
        int max_sub_index = 0;
        int min_sub_index = 0;
        for(int c = 1; c < col;c++){/// loop for subject
            if(max_mark < marks[r][c]){/// mix
                max_mark = marks[r][c];
                max_sub_index = c;
            }
            /// min
            if(min_mark > marks[r][c]){
                min_mark = marks[r][c];
                min_sub_index = c;
            }
        }
        cout<<"\n\nName - "<<students[r];
        cout<<"\nMaximum subject: "<<subjects[max_sub_index]<<"("<<max_mark<<" marks)";
        cout<<"\nMinimum subject: "<<subjects[min_sub_index]<<"("<<min_mark<<" marks)";


    }

    cout<<"\n_________________________\n\n";
    /// find mark
    /*string search_std;
    string search_sub;
    cout<<"Enter student name: ";
    getline(cin,search_std);
    cout<<"Enter subject name: ";
    getline(cin,search_sub);

    /// find index of student name (row)
    int student_index = - 1;
    for(int i = 0;i < row; i++){
        if(search_std == students[i]){
            student_index = i;
            break;
        }
    }
    /// find index of subject name (col)
    int subject_index = -1;
    for(int i = 0;i < col;i++){
        if(search_sub == subjects[i]){
            subject_index = i;
            break;
        }
    }

    /// display mark[row][col]
    cout<<"Mark: "<<marks[student_index][subject_index];
    */
    cout<<"\n___________________________________________\n\n";
    /// find student who got maximum mark of database
    int max_mark = marks[0][2];
    for(int r = 0;r < row;r++){/// database

        if(max_mark < marks[r][2]){
            max_mark = marks[r][2];
            cout<<"\nMaximum mark of database: "<<students[r]<<"("<<max_mark<<" marks)";
        }

    }
    cout<<"\n_________________________________________\n\n";

    /// find average mark for each student

    for(int r = 0;r < 1;r++){
        int total = 0;
        for(int c = 0;c < col;c++){
            total = total + marks[r][c];
        }
        cout<<"\nAverage mark for aung aung: "<<(float)total / col;
    }

    for(int r = 1;r < 2;r++){
        int total = 0;
        for(int c = 0;c < col;c++){
            total = total + marks[r][c];
        }
        cout<<"\nAverage mark for cherry: "<<(float)total / col;
    }

    for(int r =2;r < 3;r++){
        int total = 0;
        for(int c = 0;c < col;c++){
            total = total + marks[r][c];
        }
    cout<<"\nAverage mark for yuki: "<<(float)total / col;
    }

    cout<<"\n_________________________________________________\n\n";
    /// find number of student who got the same mark for c++
    int count_mark= 0;
    for(int r = 0;r < row;r++){
        if(marks[r][3] == marks[0][3])
        count_mark++;

    }
    cout<<"\nNumber of student who got same mark for c++: "<<count_mark++;






    return 0;
}
