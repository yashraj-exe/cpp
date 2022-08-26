#include<iostream>
using namespace std;
class Base{
    int data1;
public:
    int data2;
    void setData(void);
    int getData1();
    int getData2();
};
void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(){
    return data1;
};
int Base :: getData2(){
    return data2;
};

class Derived : private Base{
    int data3;
public:
    // int x = getData1(); can access private methods directly
    void process();
    void display();
    // void y(){  write way we can access private data in methods
    //     cout<<getData1();
    // }
};
void Derived :: process(){
    setData();
    data3 = data2 * getData1();
} 
void Derived :: display(){
    cout<<"The value of Data1 is "<<getData1()<<endl;
    cout<<"The value of Data2 is "<<getData2()<<endl;
    cout<<"The value of Data3 is "<<data3<<endl;
}
int main(){
    Derived o1;
    o1.process();
    o1.display();


    return 0;
}


// we can access all private members and methods in derived class mthods