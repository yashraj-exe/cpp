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
	
	vector<vector<int>> v;
	

    // first way
	// for(int i = 0 ; i < N; i++){
	//     int n;
	//     cin>>n;
	//     vector<int> temp;
	//     for(int j = 0 ; j < n; j++){
	//         int x;
	//         cin>>x;
	//         temp.push_back(x);
	//     }
	//     v.push_back(temp);
	// }

    // second way 
    for(int i = 0 ; i < N; i++){
	    int n;
	    cin>>n;
	    v.push_back(vector<int> ());
	    for(int j = 0 ; j < n; j++){
	        int x;
	        cin>>x;
	        v[i].push_back(x);
	    }
	}


	for(int i = 0 ; i < N; i++){
		printVec(v[i]);
	}
	
	
	
	return 0;
}