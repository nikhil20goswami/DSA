#include<iostream>
using namespace std;
class Scooty{ // parent class
public:
    int topSpeed;
    float mileage;
    
    virtual void sound(){
        cout<<"Sound of Scooty is Vroom Vroom"<<endl;
    }
private:
    int bootSpace ;
};
class Bike : public Scooty{ // child class or derived class
public:
    int gears;
    void sound(){
        cout<<"Soun dof the bike is Dhroom Dhroom"<<endl;
    }
};
int main(){
    Scooty* b = new Bike (); // object pointer
    b->sound();
}