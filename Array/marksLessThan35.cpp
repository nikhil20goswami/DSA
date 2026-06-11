// #include<iostream>
// using namespace std;
// int main(){
//     int marks[10];
//     for(int i=0;i<=9;i++){
//         cin>>marks[i];
//     }
//     for(int i=0;i<=9;i++){
//         if(marks[i]<35){
//             cout<<"Students marks less than 35 roll no. are : "<<i<<endl;
//         }
//     }

// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of students : ";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks : ";
    for (int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}