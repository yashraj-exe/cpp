#include<iostream>
using namespace std;

class Base{
    int pvt;
public:
    int gov;
    Base(){};
    Base(int x){
        gov = x;
    }
    void getData(){
        cout<<gov<<endl;
    }
};
class Derived :public Base{
public:
int languageCode;
    Derived(int x){
        gov = x;
        languageCode = 100;
    }
    void getData(){
        cout<<gov<<" "<<languageCode;
    }
};

int main(){

    /*
    syntax of inherit class
    class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
    {
        // members/methods/constructor
    }
    */
    Derived o1(50);
    o1.getData();

    return 0;
}