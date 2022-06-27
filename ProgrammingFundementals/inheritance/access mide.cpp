#include<iostream>
using namespace std;
class Based{
private:
    int x = 9;
protected:
    int y = 20;
public:
    int z = 22;
};
class PublicDerived: public Based{
///protected: int y = 22;
/// public: int z = 22
public:
    void show(){
        cout<<"\ny = "<<y;
        cout<<"\nz = "<<z;
    }
};
class ProtectedDerived : protected Based{
///protected : int y = 20;
/// protected: int z = 22;
public:
    void show(){
        cout<<"\ny = "<<y;
        cout<<"\nz = "<<z;
    }
};
class PrivateDerived : private Based{
/// private : int y = 20
/// private : int z = 22
public:
    void show(){
        cout<<"\ny = "<<y;
        cout<<"\nz = "<<z;
    }
};

int main(){

    PublicDerived obj1;
    ///cout<<"y = "<<obj1.y;///outside the class
    ///cout<<"z = "<<obj1.z;/// z (public)
    /// obj1.show();

    ProtectedDerived obj2;
    /// cout<<"z = "<<obj2.z;/// z(protected
    /// objw.show();

    PrivateDerived obj3;
    obj3.show();
    return 0;
}
