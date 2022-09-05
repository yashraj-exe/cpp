#include<iostream>
using namespace std;
class Base1{
    protected:
        int b1;
    public:
        void set_b1(int x){
            b1 = x
        };
};
class Base2{
    protected:
        int b2;
    public:
        void set_b2(int x){
            b2 = x;
        }
};  
class Derived : public Base1, public Base2{
    public:
    int x = b1;
        void show(void){
            cout<<"The sum of B1 and B2 is :- "<<b1+b2<<endl;
        };
        void show2(void){
            cout<<"The value of x is "<<x<<endl;
        }
};
int main(){

    Derived d1;
    d1.set_b1(100);
    d2.set_b2(200);
    d2.show();


    return 0;
}