#include<iostream>
using namespace std;

class Yash{
    int a,b;
    public:
        Yash(void);  //constructor declaration deafult 
        void print(){
            cout<<a<<"+"<<b<<"i";
        };
};

Yash :: Yash(void){   // constructor initialization
    a = 50;
    b = 100;
};

int main(){
    Yash x;
    x.print();


    return 0;
}