#include<iostream>
using namespace std;
class Car{
    public:
    int seats;
    int price;
    string name;
    string type;
    Car(){ // Default constructor

    }
    Car(string n , int p , int s , string t){ // Parameterized Constructor
        seats = s ;
        type = t ;
        price = p;
        name = n;
    }
};
void print(Car c){
    cout<<"Name of the car is : "<<c.name<<endl;
    cout<<"Price of the car is : "<<c.price<<endl;
    cout<<"Seats of the car is : " <<c.seats<<endl;
    cout<<"Type of the car is : "<<c.type<<endl<<endl;
}
int main(){
    Car c1("Thar" , 1500000 , 5 , "SUV");

    Car c2;
    c2.name = "Honda City";
    c2.price =  1500000;
    c2.seats = 6 ;
    c2.type = "Sedan";

    print(c1);
    print(c2);
}