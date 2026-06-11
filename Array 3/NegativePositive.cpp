#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>&v){
    int p = 0;
    int n = v.size()-1 ;

    while(p<n){
        if(v[p]>0){
            p++;
        }
        else if (v[n]<0){
            n--;
        }
        else{
            swap(v[p],v[n]);
            p++;
            n--;
        }
    }

}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v);

      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}