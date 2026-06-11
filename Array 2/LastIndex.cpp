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
    
//     int x = 5;
//     int idx = -1;

//     for(int i=0;i<v.size();i++){
//        if(v[i]==x){
//         idx = i;
//        }
//     }
//     cout<<"Last occurence of x found at index : "<<idx;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(9);
    v.push_back(5);
    v.push_back(45);
    v.push_back(40);
    v.push_back(5);
    
    int x = 5;
    int idx = -1;

    for(int i=v.size()-1;i>=0;i++){
         if(v[i]==x){
         idx = i;
         break;
       }
    }
    cout<<"Last occurence of x found at index : "<<idx;
}
   