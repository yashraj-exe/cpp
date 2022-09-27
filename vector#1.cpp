#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i = 0; i < v.size(); i++){ // v.size() return the size of a vactor
        cout<<v[i]<<" ";
    }
}


void display1(vector<int> v){
    vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
} // both are same but different ways
int main(){
    
    // vector <int> vec;
    // int elem;
    // for(int i = 0; i < 4; i++){
    //     cout<<"Enter the Elem :- "<<endl;
    //     cin>>elem;
    //     vec.push_back(elem);
    // }
    
    // display(vec);

    // vector <int> vec;
    // int elem;
    // for(int i = 0; i < 4; i++){
    //     cout<<"Enter the Elem :- "<<endl;
    //     cin>>elem;
    //     vec.push_back(elem);
    // };

    // vector<int> :: iterator iter = vec.beign(); // here iter points to a 0 index of vector we can increase the iter point by using iter+1 or iter ++
    // vec.insert(iter,500);
    
    
    // another way to insert elem in vector

    vector <int> vec5(5);
    vector <int> :: iterator it;
    it = vec5.begin();
    *it = 400;
    it++;
    *it = 500;
    it++;
    *it = 600;

    display(vec5);

    // sorting the vector
    // sort(v.begin(),v.end()); // comin g from a algorithm library
    // reverse(v.begin(),v.end())
    return 0;
}