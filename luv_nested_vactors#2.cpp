#include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>> &x){
    for(int i = 0 ;i < x.size(); i++){
        cout<<x[i].first << " " << x[i].second<<endl;
    }
}
int main(){
    
    // vector<pair<int,int>> v = {{1,2},{2,3},{3,4}}; // directly initialize
    vector<pair<int,int>> v;
    for(int i = 0; i < 3; i++){
        int x , y;
        cin>>x>>y; 
        v.push_back({x,y});
    }
    printVec(v);
    return 0;
}