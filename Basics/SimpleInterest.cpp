#include<iostream>
using namespace std;
int main(){
    float principle , rate , time , simple_interest;
    principle = 100000;
    rate = 10;
    time = 2 ;
    simple_interest = (principle * rate * time ) / 100;
    cout<<"Simple Interest is : "<<simple_interest;
}