#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){
	for(int i = 0 ; i < v.size(); i++){
		std::cout<<v[i]<<" ";
	}
	std::cout<<endl;
}
int main(){
	int N;
	cin>>N;
	vector <int> v[N]; // fixed N rows but column are dynamic 
	
	for(int i = 0 ; i < N; i++){ // runnning for a every v[i] vector 
		int n; 
		cin>>n; // taking input for how many elements insert in a v[0]vecotor
		for(int j = 0 ; j < n ; j++){ // running for a n times for talking n inputs and assign in a v[i] vector
			int x;
			cin>>x;
			v[i].push_back(x);
		}
	}
	
	for(int i = 0 ; i < N; i++){
		printVec(v[i]); // here every v[i] is seperate vector let v[0] = vector<int> x;
	}
	

    
	
	
	return 0;
}