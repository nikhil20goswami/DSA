#include<iostream>
using namespace std;
int main(){
    
    int m;
    cout << "Enter the number of rows : ";
    cin >> m;

    int n;
    cout << "Enter the number of columns : ";
    cin >> n;

    int arr[m][n];

    cout << "Input of 2D array :- " << endl;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout<<endl;

    cout<<"Output of 2D array :-"<<endl;
     for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < m ; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout<<endl;

    cout<<"Transpose in same matrix :- "<<endl;
     for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

}