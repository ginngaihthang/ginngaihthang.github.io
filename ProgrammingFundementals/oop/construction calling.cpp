#include<iostream>
using namespace std;
class Based{
private:
    int x ;
    int y;
public:
    Based(){
        cout<<"\nBased's default constructor\n";
    }
    Based(int x,int y){
        cout<<"\nBased's arrgument constructor\n";
        this->x = x;
        this->y = y;
    }
};
class Derived : public Based{
private:
    int z;
public:
    Derived(){
        cout<<"\nDerived's default constructor\n";
    }
    Derived(int a,int b,int c) : Based(a,b){
        cout<<"\nDerive's argument constructor\n";
        this->z = c;
    }
};
int main(){

    Derived obj1; /// default constructor
    cout<<"\n_______Another Object__________\n";
    Derived obj(100,200,300); /// argument constructor

    return 0;
}
