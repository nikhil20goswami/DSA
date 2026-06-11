// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(9);
//     v.push_back(5);
//     v.push_back(45);
//     v.push_back(40);
//     v.at(2)=90;
//     cout<<v.at(2);
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(9);
    v.push_back(5);
    v.push_back(45);
    v.push_back(40);

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

// Sorting using vectors 
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}