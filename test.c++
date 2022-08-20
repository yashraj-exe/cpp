#include<iostream>
using namespace std;
class Employe{
    private:
        int a, b, c;
    public:
        int e, f;
    
    void setData(int a1, int b1, int c1);
    void getData(){
        cout<<a <<endl<<b <<endl<<c <<endl<<e <<endl<<f;
    };
};

void Employe :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
};

int main(){
    Employe yash;
    yash.e = 10;
    yash.f = 20;
    yash.setData(1,2,3);
    yash.getData();

    return 0;
}