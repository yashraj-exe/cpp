#include<iostream>
using namespace std;

int count= 0;
class Num{
    public:
        Num(){
            count ++;
            cout<<"Making object Number:- "<<count<<endl;
        }
        ~Num(){
            cout<<"Free up memory of a Object Number "<<count<<endl;
            count--;
        }
};


int main(){
    cout<<"Main Up";
    Num a1;
    { 
        cout<<"Block In"<<endl;
        Num a2,a3;
        cout<<"Block Out"<<endl;
    }

    cout<<"Main end";


    return 0;
}