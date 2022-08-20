#include<iostream>
using namespace std;
class Complex{
    int a;
    int b;
public:
    void setNumber(int a1,int b1){
        a = a1;
        b = b1;
    };
    friend Complex add(Complex o1,Complex o2);
    void print(){
        cout<<a<<" + "<<b<<"i"<<endl;
    };
};

Complex add(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
};
int main(){
    Complex a,b,sum;
    a.setNumber(1,2);
    a.print();
    b.setNumber(2,5);
    b.print();

    sum = add(a,b);
    sum.print();
    return 0;
}