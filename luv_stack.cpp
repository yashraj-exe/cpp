#include<bits/stdc++.h>
using namespace std;
int main(){
    
    stack<int> s;
    s.push(5);
    s.push(4);
    // cout<<s.empty();
    // cout<<s.top();
    // s.pop();
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
        
    }
    
    
    return 0;
}