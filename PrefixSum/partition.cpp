#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Formation of Prefix Sum

    for(int i = 1 ; i < n ; i++){
        arr[i] = arr[i] + arr[i - 1];
    }

    // Check if any x exists

    int idx = -1 ;
    for (int i = 1 ; i < n ; i++){
        if(2 * arr[i] == arr[n-1]){
            idx = i ; 
            break;
        }
    }
    if(idx != -1 ) cout<<"Yes , it can be partioned after "<<idx;
    else cout<<"No , It cannot be partioned.";
}