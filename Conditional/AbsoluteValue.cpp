#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // if(n>0){
    //     cout<<"Value is : "<<n;
    // }
    // else{
    //     cout<<"Value is : "<<-n;
    // }

    if(n<0){
        n=-n;
    }
    cout<<"The absolute value is : "<<n;
}