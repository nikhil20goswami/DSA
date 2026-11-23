#include<iostream>
using namespace std;
class Cricketers{
    public:
    string name ;
    string role;
    int runs;
    int age ;
    Cricketers(string name , string role , int runs , int age){
        this->age = age ;
        this->name = name ;
        this->role = rolefun;
        this->runs = runs ;
    }
};
void print(Cricketers c){
    cout<<"Name of the Cricketer : "<<c.name<<endl;
    cout<<"Role of the Cricketer : "<<c.role<<endl;
    cout<<"Runs of the Cricketer : "<<c.runs<<endl;
    cout<<"Age of the Cricketer : "<<c.age<<endl<<endl;
}
int main(){
    Cricketers c1("Rohit Sharma " , "Batsman" , 13000 , 39);
    Cricketers c2("Shubhman Gill" , "Batsman" , 3000 , 27);
    Cricketers c3("Virat Kohli" , "Batsman" , 15000 , 38);
    Cricketers c4("Shreyas Iyer" , "Batsman" , 2500 , 30);
    Cricketers c5("KL Rahul" , "Keeper Batsman" , 3000 , 32);
    Cricketers c6("Hardik Pandya" , "All-Rounder" , 1500 , 33);

    print(c1);
    print(c2);
    print(c3);
    print(c4);
    print(c5);
    print(c6);
}