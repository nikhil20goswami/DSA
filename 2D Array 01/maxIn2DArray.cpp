#include<iostream>
#include<climits>
using namespace std;

int main() {

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

    int mx = INT_MIN;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(mx < arr[i][j]) {
                mx = arr[i][j];
            }
        }
    }

    cout << "The maximum element in the 2D array is : " << mx;
}