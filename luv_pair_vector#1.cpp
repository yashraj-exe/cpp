#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // pair<int, string> p;
    
    // p = make_pair(18,"yash");
    // p = {18,"yassh"};  both are same 
    // cout<< p.first << " " << p.second; // print the pair values
    
    
    // make a pair of two array
    int a[]= {1,2,3};
    int b[]= {2,3,4};
    
    pair<int,int> p_array[3]; // make array of size three
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    
    // printing /
    for(int i = 0 ; i < 3 ;i++){
        cout<<p_array[i].first << " " << p_array[i].second<<endl;
    }
    
    
    
    return 0;
}