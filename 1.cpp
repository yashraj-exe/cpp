#include<iostream>
using namespace std;
class Employee{
    int productID[100];
    int productPrice[100];
    int counter;
public:
    void initCounter(void){counter=0;};
    void setData(void);
    void getData(void);
};
void Employee ::setData(void){
    cout<<"Enter Id of a Product"<<endl;
    cin >> productID[counter];
    cout<<"Enter price "<<endl;
    cin>> productPrice[counter];
    counter ++;
};

void Employee :: getData(void){
    for(int i = 0 ; i < counter;i++){
        cout<<"Product id is "<<productID[i]<<"and price is "<<productPrice[i]<<endl;
    }
}
int main(){

    Employee yash;
    yash.initCounter();
    yash.setData();
    yash.setData();
    yash.setData();
    yash.getData();




    return 0;
}