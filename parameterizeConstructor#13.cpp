#include<iostream>
using namespace std;
class Yash{
    int a,b;
    public:
        Yash(int,int);
        void print(){
            cout<<a<<" " <<b << endl;
        };
};

Yash :: Yash(int x, int y){
    a=x;
    b=y;
};
int main(){

    Yash a(100,200);
    a.print();


    return 0;
}