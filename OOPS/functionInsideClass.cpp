#include<iostream>
using namespace std;
class Cricketers{
    public:
    int age;
    int runs;
    string name;
    float avg;
    Cricketers(string name , int age , int runs , float avg){
        this->age = age;
        this->avg = avg;
        this->name = name;
        this->runs = runs;
    }
    void print(){
        cout<<"Name of the Cricketer : "<<this->name<<endl;
        cout<<"Age of the Cricketers : "<<this->age<<endl;
        cout<<"Runs of the Cricketers : "<<this->runs<<endl;
        cout<<"Average of the Cricketers : "<<this->avg<<endl;
        cout<<"Matches of the Cricketers : "<<this->matches()<<endl;
        cout<<endl;
    }
    int matches(){
        return runs / avg ;
    
    }

};
int main(){
    Cricketers c1("Virat Kohli" , 38 , 15000 , 55.7);
    Cricketers c2("MS Dhoni" , 45 , 10000 , 45.9);

    c1.print();
    c2.print();
 
}