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
    cout<<"Type of the car is : "<<c.type<<endl<<endl;
}
void change(Car& c){ // This is Pass By Reference
    c.name = "Audi A8";
}
int main(){
    Car c1;
    c1.name = "Honda City";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type = "Sedan";

    print(c1);
    change(c1);
    print(c1);
}