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
    cout<<endl;

    int t[n][m];
    cout<<"Transpose of Matrix :- "<<endl;
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < m ; i++){
            t[i][j] = arr[j][i];
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << t[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}