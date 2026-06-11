// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
    
//     int i = 0;
//     int j = v.size()-1;

//     while(i<=j){
//         int temp = v [i];
//         v [i] = v [j];
//         v [j] = temp;
//         i++;
//         j--;
//     }

//     display(v);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
    
//     for(int i=0,j=v.size()-1;i<=j;i++,j--){
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//     }
//     display(v);
// }



#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    reverse(v.begin(),v.end());

    display(v);
}