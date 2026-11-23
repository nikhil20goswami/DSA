#include<iostream>
using namespace std;
class scooty{
public:
    float mileage ;
    int topSpeed;
private:
    int bootSpace;
};
class Bike : public scooty{
public:
    int gears;
};
int main(){
    Bike b1 ; 
    b1.gears = 5 ;
    b1.mileage  = 50.00;
    b1.topSpeed = 100;

    cout<<"Topspeed of Bike : "<<b1.topSpeed<<endl;
    cout<<"Mileage of Bike : "<<b1.mileage<<endl;
    cout<<"Gears of Bike : "<<b1.gears<<endl;
}