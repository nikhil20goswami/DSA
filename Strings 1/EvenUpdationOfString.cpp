#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    for(int i = 0 ; s[i]!='\0';i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<"Even updated string is : "<<s;
}