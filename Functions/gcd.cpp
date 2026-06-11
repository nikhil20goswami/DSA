// #include<iostream>
// using namespace std;
// int hcf(int a ,int b ){
//     int hcf = 1;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             hcf = i;
//         }
//     }
//     return hcf;
// }
// int main(){
//     int a;
//     cout<<"Enter the 1st number : ";
//     cin>>a;
//     int b;
//     cout<<"Enter the 2nd number : ";
//     cin>>b;
//     cout<<hcf(a,b);
// }

// #include<iostream>
// using namespace std;
// int hcf(int a ,int b ){
//     // int hcf = 1;
//     // for(int i=min(a,b);i>=1;i--){
//     //     if(a%i==0 && b%i==0){
//     //         hcf = i;
//     //         break;
//     //     }
//     // }
//     //return hcf;
// }
// int main(){
//     int a;
//     cout<<"Enter the 1st number : ";
//     cin>>a;
//     int b;
//     cout<<"Enter the 2nd number : ";
//     cin>>b;
//     cout<<hcf(a,b);
// }



#include<iostream>
using namespace std;
int hcf(int a ,int b ){
    while(b!=0){
        int temp = b;
        b = a % b;
        temp = a;
    }
    return a;
}
int main(){
    int a;
    cout<<"Enter the 1st number : ";
    cin>>a;
    int b;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    cout<<hcf(a,b);
}