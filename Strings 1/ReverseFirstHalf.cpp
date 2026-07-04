#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : ";
    getline(cin,s);
    int length = s.length();
    reverse(s.begin(),s.begin()+length/2);
    cout<<"Updated string is : "<<s;
}