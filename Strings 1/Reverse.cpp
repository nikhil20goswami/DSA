#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s ;
    cout<<"Original string is : ";
    getline(cin,s);
    int n = s.length();
    reverse(s.begin()+1,s.begin()+5);
    cout<<"Updated string is : "<<s;

}