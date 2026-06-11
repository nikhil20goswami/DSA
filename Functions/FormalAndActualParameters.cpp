#include<iostream>
using namespace std;
void fun(int x){
    cout<<"Address of Fun is : "<<&x;
}
int main(){
    int x;
    cout<<"Address of main is : "<<&x<<endl;
    fun(x);
}


// Here fun(x) is the actual parameter.
// Here void fun(int x) is the formal parameter.