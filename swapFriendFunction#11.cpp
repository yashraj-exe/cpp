#include<iostream>
using namespace std;
// forward decleration
class Y;
class X{
    int data1;
    friend void exchange(X &, Y &);
public:
    void setData(int x){
        data1 = x;
    };
    void print(){
        cout<<data1<<endl;
    };
};

class Y{
    int data2;
    friend void exchange(X &, Y &);
public:
    void setData(int x){
        data2 = x;
    };
    void print(){
        cout<<data2<<endl;
    };
};

void exchange(X &o1, Y &o2){
    int temp = o1.data1;
    o1.data1 = o2.data2;
    o2.data2 = temp;
};

int main(){

    X x1;
    x1.setData(1);
    Y x2;
    x2.setData(5);

    exchange(x1,x2);
    x1.print();
    x2.print();

    return 0;
}