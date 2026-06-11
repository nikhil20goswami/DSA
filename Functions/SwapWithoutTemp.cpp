#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"The value of a is : ";
    cin>>a;
    cout<<"The value of b is : ";
    cin>>b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"The value of a after swapping : "<<a<<endl;
    cout<<"The value of b after swapping : "<<b;
}