// #include<iostream>
// #include<string>
// using namespace std;
// void printSubset(string ans,string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printSubset(ans+ch,original.substr(1));
//     printSubset(ans,original.substr(1));
// }
// int main(){
//     string str = "abc";
//     printSubset("",str);
// }

#include<iostream>
#include<string>
using namespace std;
void printSubset(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    printSubset(ans+ch,original,idx+1);
    printSubset(ans,original,idx+1);
}
int main(){
    string str = "abc";
    printSubset("",str,0);
}