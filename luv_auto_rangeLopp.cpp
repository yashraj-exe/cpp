#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> v= { 1,2,3,4,5,6,6};
    
    for(int val : v){
        cout<<val<<" ";
    }
    
    cout<<endl;
    vector<pair<int,int>> vp = {{1,2},{3,4}};
    
    for(pair<int,int> val : vp){
        cout<<val.first<<" "<<val.second<<endl;
    }
    
     for(auto it = vp.begin(); it != vp.end();it++){ // here auto keyword automaticially detect the datatype we dont need write like this vector<pair<int,int>> :: iterator it; just write auto
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}