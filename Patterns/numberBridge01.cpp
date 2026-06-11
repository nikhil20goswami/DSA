#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    int m = n-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        for(int j=1;j<=m+1-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}