#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>&a){
    a[1] = 100;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(9);
    v.push_back(5);
    v.push_back(45);
    v.push_back(40);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}