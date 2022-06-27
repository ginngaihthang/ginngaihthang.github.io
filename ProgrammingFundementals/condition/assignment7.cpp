#include<iostream>
using namespace std;
int main(){
    int programming , english , math;
    cout<<"Enter mark for Programming: ";
    cin>>programming;
    cout<<"Enter mark for English: ";
    cin>>english;
    cout<<"Enter mark for Math: ";
    cin>>math;


    int max_mark = programming;
    int min_mark = english;
    int total = programming + english + math;
    int average = total / 3;
    if(programming >= 50 && english >= 50 && math >= 50){
        if(programming >= 80 && english >= 80 && math >=80){
            if(max_mark < english){
                max_mark = english;
            }
            if(max_mark < math){
                max_mark = math;
            }
            else{
                if(min_mark > programming){
                    min_mark = programming;
                }
                if(min_mark > math){
                    min_mark = math;
                }
            }
            cout<<"Maximum mark is : "<<max_mark;
            cout<<"\nMinimum mark is : "<<min_mark;
            cout<<"\nTotal mark: "<<total;
            cout<<"\nAverage mark: "<<average;
            cout<<"\nDistinction subject: "<<"programming";
            cout<<"\nDistinction subject: "<<"english";
            cout<<"\nDistinction subject: "<<"math";

        }
        else if(programming >= 80 || english >= 80 || math >80){
                if(programming >= 80){
                    if(max_mark < english){
                        max_mark = english;
                    }
                    if(max_mark < math){
                        max_mark = math;
                    }else{
                    if(min_mark > programming){
                    min_mark = programming;
                    }
                    if(min_mark > math){
                    min_mark = math;
                    }
            }
                    cout<<"\nDistinction subject: "<<"programming";
                }
                if(english >= 80){
                    if(max_mark < english){
                        max_mark = english;
                    }
                    if(max_mark < math){
                        max_mark = math;
                    }
                    else{
                    if(min_mark > programming){
                    min_mark = programming;
                    }
                    if(min_mark > math){
                    min_mark = math;
                    }
                    }
                    cout<<"\nDistinction subject: "<<"english";
                }
                if(math >= 80){
                    if(max_mark < english){
                        max_mark = english;
                    }
                    if(max_mark < math){
                        max_mark = math;
                    }
                    else{
                    if(min_mark > programming){
                    min_mark = programming;
                    }
                    if(min_mark > math){
                    min_mark = math;
                    }
                    }
                    cout<<"\nDistinction subject: "<<"math";
                }
                cout<<"\nMaximum mark is : "<<max_mark;
                cout<<"\nMinimum mark is : "<<min_mark;
                cout<<"\nTotal mark: "<<total;
                cout<<"\nAverage mark: "<<average;
            }
            else{

                cout<<"Pass : "<<"programming";
                cout<<"\nPass : "<<"english";
                cout<<"\nPass : "<<"math";
                cout<<"\nMaximum mark is : "<<max_mark;
                cout<<"\nMinimum mark is : "<<min_mark;
                cout<<"\nTotal mark: "<<total;
                cout<<"\nAverage mark: "<<average;
            }

        }
        else{
            if(programming < 50 && english < 50 && math < 50){
                    if(max_mark < english){
                        max_mark = english;
                    }
                    if(max_mark < math){
                        max_mark = math;
                    }
                    else{
                        if(min_mark > programming){
                            min_mark = programming;
                        }
                        if(min_mark > math){
                            min_mark = math;
                        }
                    }
                    cout<<"Fail : "<<programming;
                    cout<<"\nFail : "<<english;
                    cout<<"\nFail : "<<math;
            }
            else{
                if(programming < 50){
                    if(max_mark < english){
                        max_mark = english;
                    }
                    if(max_mark < math){
                        max_mark = math;
                    }
                    else{
                        if(min_mark > programming){
                            min_mark = programming;
                        }
                        if(min_mark > math){
                            min_mark = math;
                        }
                    }cout<<"Fail : "<<programming;

                }
                if(english < 50){
                    if(max_mark < english){
                        max_mark = english;
                    }
                    if(max_mark < math){
                        max_mark = math;
                    }
                    else{
                        if(min_mark > programming){
                            min_mark = programming;
                        }
                        if(min_mark > math){
                            min_mark = math;
                        }
                    }
                    cout<<"\nFail : "<<english;
                }
                if(math < 50){
                    if(max_mark < english){
                        max_mark = english;
                    }
                    if(max_mark < math){
                        max_mark = math;
                    }
                    else{
                        if(min_mark > programming){
                            min_mark = programming;
                        }
                        if(min_mark > math){
                            min_mark = math;
                        }
                    }
                    cout<<"\nFail : "<<math;
                }

            }
            cout<<"\nMaximum mark is : "<<max_mark;
            cout<<"\nMinimum mark is : "<<min_mark;
            cout<<"\nTotal mark: "<<total;
            cout<<"\nAverage mark: "<<average;

        }







    return 0;
}
