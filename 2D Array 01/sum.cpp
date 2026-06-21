#include<iostream>
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

    int sum = 0 ;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
           sum += arr[i][j]; 
        }
    }

    cout << "The sum of the 2D array is : " << sum;
}