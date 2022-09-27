#include<bits/stdc++.h>
using namespace std;
int main(){
    
    map<int,string> m;
    
    m[1] = "yash";
    m[2] = "raj";
    m[3] = "soni";
    
    map<int,string> :: iterator it = m.find(4); // find needs a iterator if value not found then he return m.end()
    
    if(it == m.end()){
        cout<<"No Value Find";
    }else{
        cout<<(*it).first<<" "<<(it->second)<<"";
    }
    return 0;
}