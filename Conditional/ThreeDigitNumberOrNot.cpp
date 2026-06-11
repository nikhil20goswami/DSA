#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"Given Number is the three digit number ";
    }
    else{
        cout<<"Given number is not a three digit number ";
    }
}