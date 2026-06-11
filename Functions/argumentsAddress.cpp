#include<iostream>
using namespace std;
void function(int x , int y ){
    cout<<"Address of void function x : "<<&x<<endl;
    cout<<"Address of void function x : "<<&x<<endl;
}
int main(){
    int x = 3;
    int y = 4;
    cout<<"Address of main function x : "<<&x<<endl;
    cout<<"Address of main function y : "<<&y<<endl;
    function(x , y);
}