#include<iostream>
using namespace std;
int maxofthree(int a , int b , int c){
    if(a>b && a>c){
        return a;
    }
    else if (b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the 1st number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    cout<<"Enter the 3rd number : ";
    cin>>c;
    cout<<maxofthree(a,b,c);
}