#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String : ";
    cin>>s;
    int count = 0;
    int i = 0;
    while(s[i]!='\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count ++;
        }
        i++;
    }
    cout<<"Count of vowels is : "<<count;
}