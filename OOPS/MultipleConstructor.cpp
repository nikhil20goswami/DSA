#include<iostream>
using namespace std;
class Car{
    public:
    int seats;
    int price;
    string name;
    string type;
    Car(){ 
    }
    Car(string n , int p , int s ){ 
        seats = s ;
        price = p;
        name = n;
    }
    Car(string n , int p , int s , string t){// Multiple Constructor
        seats = s ;
        type = t ;
        price = p;
        name = n;   
    }
    Car(string n){
        name = n ;
    }
    Car(string t , string n , int p , int s){
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
    Car c1("Thar" , 1500000 , 5 );
    c1.type = "SUV";

    Car c2;
    c2.name = "Honda City";
    c2.price =  1500000;
    c2.seats = 6 ;
    c2.type = "Sedan";

    Car c3(	"Hyundai Creta" , 1300000 , 5 , "SUV");

    Car c4("Mahindra Scorpio-N");
    c4.price = 2000000;
    c4.seats = 6;
    c4.type = "SUV";

    Car c5("Hatchback" , "Maruti Baleno " , 1000000 , 4);

    print(c1);
    print(c2);
    print(c3);
    print(c4);
    print(c5);
}