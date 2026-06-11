#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter thr value of n : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=2*i-1;j=j+2){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=1;j<=i;j++){
            cout<<k;
            k=k+2;
        }
        cout<<endl;
    }
}