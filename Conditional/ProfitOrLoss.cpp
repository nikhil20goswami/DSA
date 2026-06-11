#include<iostream>
using namespace std;
int main(){
    int cost_price,selling_price;

    cout<<"Enter the cost price : ";
    cin>>cost_price;

    cout<<"Enter the selling price :";
    cin>>selling_price;

    if(selling_price>cost_price){
        cout<<"Profit of Rs. "<<selling_price-cost_price;
    }
    else if(cost_price>selling_price){
        cout<<"Loss of Rs. "<<cost_price-selling_price;
    }
    else if(cost_price==selling_price){
        cout<<"No Profit No Loss";
    }
}