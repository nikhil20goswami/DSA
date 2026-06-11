#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a,b;
    cout<<"Enter the First Number : ";
    cin>>a;
    cout<<"Enter the Second Number : ";
    cin>>b;
    swap(a,b);
    cout<<"The value of a and b after swapping : "<<a<<" "<<b;
}