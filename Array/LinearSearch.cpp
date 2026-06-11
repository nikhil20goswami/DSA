// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of an array : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cout<<"Enter the element you want to search : ";
//     cin>>x;
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==x){
//             cout<<"Element is present in the array.";
//         }
//     }

// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search : ";
    cin>>x;

    bool flag = false;

    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }
        if(flag==true){
            cout<<"Element found in the given array. ";
        }
        else{
            cout<<"404 Not Found ";
        }
    
}