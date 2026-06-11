// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5);
//     for(int i=0;i<=4;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<=4;i++){
//         cout<<v[i]<<" ";
//     }
// }


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<=4;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<=4;i++){
        cout<<v[i]<<endl;
    }
}