#include<iostream>
using namespace std;
int salaries[5] = {100000,7000000,900000,1500000};

int findMaxSalary(){
    int max_sal = salaries[0];
    for(int i = 0;i < 5;i++){
        if(max_sal < salaries[i])
            max_sal = salaries[i];
    }

    return max_sal;
}
int findTotalSalary(){
    int total = 0;
    for(int i = 0;i < 5;i++){
        total += salaries[i];

    return total;
    }

}

int main(){
    int maximun_sal = findMaxSalary();
    cout<<"Maximum salary is "<<maximun_sal<<" ks.";
    cout<<"\nTotal Salary is " <<findTotalSalary()<<"ks. ";

    return 0;
}
