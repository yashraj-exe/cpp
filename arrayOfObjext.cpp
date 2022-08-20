#include<iostream>
using namespace std;
class Emp {
    int a;
    int b;
public:
    void setData(int a1, int b1);
    void setDataBySum(Emp o1,Emp o2); 
    void print(){
        cout<<a<<"+"<<b<<"i"<<endl;
    };
};

void Emp :: setData(int a1,int b1){
    a = a1;
    b = b1;
};

void Emp :: setDataBySum(Emp o1,Emp o2){
    a = o1.a + o2.a;
    b = o1.b + o2.b; 
};
int main(){
    Emp a[2];

    a[0].setData(1,2);
    a[0].print();
    
    a[1].setData(3,4);
    a[1].print();

    a[2].setDataBySum(a[0],a[1]);
    a[2].print();



    return 0;
}