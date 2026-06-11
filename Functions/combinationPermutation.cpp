// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int r;
//     cout<<"Enter the value of r : ";
//     cin>>r;
//     int nfact = 1;
//     for(int i=2;i<=n;i++){
//         nfact *= i;
//     }
//     int rfact = 1;
//     for(int i=2;i<=;i++){
//         rfact *= i;
//     }
//     int nrfact = 1;
//     for(int i=2;i<=n-r;i++){
//         nrfact *= i;
//     }
//     int ncr = nfact/(rfact * nrfact);
//     cout<<ncr;
// }



#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int r;
    cout<<"Enter the value of r : ";
    cin>>r;
    int nfact = fact (n);
    int rfact = fact (r);
    int nrfact = fact (n-r);
    int ncr = nfact / ( rfact * nrfact);
    cout<<ncr;
    
}