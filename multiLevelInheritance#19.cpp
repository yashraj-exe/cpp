#include<iostream>
using namespace std;
class RollNumber{
    protected:
        int rollNumber;
    public:
        void set_rollNumber(int);
        void get_rollNumber(void);
}

void RollNumber :: set_rollNumber(int x){
    rollNumber = x;
}
void RollNumber :: get_rollNumber(void){
    cout<<"The Roll number is:- "<<rollNumber<<endl;
}

class Marks : public RollNumber{
    protected:
        int math;
        int physics;
    public:
        void set_marks(int,int);
        void get_marks(void);
}

void Marks :: set_marks(int m1, int m2){
    math = m1;
    physics = m2;
}
void Marks :: get_marks(void){
    cout<<"The marks of math and physics is:- "<<math<<" ,"<<physics<<endl;
}

class Percentage : public Marks{
    protected:
        int percentage;
    public: 
        void get_percentage(void){
            cout<<"The total percentage is :-"<<(math+physics)/2<<endl;
        }ñ
}
int main(){

    Percentage p1;
    p1.set_rollNumber(20000);
    p1.set_marks(94,92);
    p1.get_percentage();

    return 0;
}