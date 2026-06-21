#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Rows of Matrix : ";
    cin>>m;
    int n;
    cout<<"Enter Columns of Matrix : ";
    cin>>n;

    int arr[m][n];

    // Input 

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // Spiral

    int minrow = 0 ;
    int maxrow = m - 1 ;
    int mincolumn = 0 ;
    int maxcolumn = n - 1 ;
    int total_elements = m * n ;
    int count = 0 ;


    while(minrow <= maxrow && mincolumn <= maxcolumn){

        // Right
        for(int j = mincolumn ; j <= maxcolumn && count < total_elements ; j++){
            cout<<arr[minrow][j]<<" ";
            count ++;
        }
        minrow ++;

        // Down 
        for(int i = minrow ; i <= maxrow && count < total_elements ; i++){
            cout<<arr[i][maxcolumn]<<" ";
            count ++;
        }
        maxcolumn --;

        // Left
        for(int j = maxcolumn ; j >= mincolumn && count < total_elements ; j--){
            cout<<arr[maxrow][j]<<" ";
            count ++;
        }
        maxrow --;

        // Up
        for(int i = maxrow ; i >= minrow && count < total_elements ; i--){
            cout<<arr[i][mincolumn]<<" ";
            count ++;
        }
        mincolumn ++;
    }



}