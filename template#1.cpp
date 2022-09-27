#include<iostream>
using namespace std;
template <class T> // template is nothing but isn jst a dynamic datatype
T swapp(T &a, T &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    
    int a = 40;
    int b = 50;
    swapp(a,b);
    cout<<a<<" "<<b;
    
    return 0;
}