#include<iostream>
using namespace std;
int main(){
    int arr[2][4];

    cout<<"Input of the 2D Array "<<endl;
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Output of the 2D Array "<<endl;
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}