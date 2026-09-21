// #include<iostream>
// using namespace std;
// void factorial(int n){
//     for(int j=1;j<=n;j++){
//         int f = 1;
//         for(int i=2; i<=j; i++){
//             f *= i;
//         }
//         cout << f << endl;
//     }
// }
// int main(){
//     factorial(5);
// }

#include<iostream>
using namespace std;
void factorial(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<f<<endl;
    }
}
int main(){
    factorial(5);
}