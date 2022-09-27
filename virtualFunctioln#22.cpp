#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        virtual void display(){ // over write default behavior of run time polymorphism this is also called a late binding 
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){

    BaseClass *bptr;
    BaseClass b1;
    DerivedClass d1;

    bptr = &d1;

    bptr->display();


    return 0;
}