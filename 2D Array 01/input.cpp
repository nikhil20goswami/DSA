#include<iostream>
using namespace std;
int main(){
    int m ; 
    cout<<"Enter the number of columns : ";
    cin>>m;
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    int arr[m][n];

    cout<<"Input of 2D Array  "<<endl;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Output of this 2D Array "<<endl;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}