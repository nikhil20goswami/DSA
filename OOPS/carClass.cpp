#include<iostream>
using namespace std;
class Car{
    public:
    int price;
    string name;
    string type;
    int seats;
};
void print(Car c){
    cout<<"Name of the car is : "<<c.name<<endl;
    cout<<"Price of the car is : "<<c.price<<endl;
    cout<<"Seats of the car is :" <<c.seats<<endl;
    cout<<"Type of the car is : "<<c.type<<endl;
}
int main(){
    Car c1;
    c1.name = "Honda City";
    c1.price = 1500000;
    c1.seats = 5 ;
    c1.type = "Sedan";

    Car c2;
    c2.name = "Thar";
    c2.price = 2000000;
    c2.seats = 6 ;
    c2.type = "Mahindra";

    print(c1);
    print(c2);
}