#include<iostream>
using namespace std;
class Cricketers{
    public:
    int runs;
    float avg;
    string name;
    Cricketers(string name , int runs , float avg){
        this->avg = avg;
        this->name = name;
        this->runs = runs;
    }
    void change(Cricketers* c){
        c->avg = 70.00; 
    }
};
int main(){
    Cricketers c1("Shubhman Gill" , 3000 , 59.2);

    Cricketers* p1 = &c1;
    cout<<(*p1).avg<<endl;

    (*p1).avg = 55.6;

    cout<<c1.avg<<endl;

    c1.change(&c1);

    cout << c1.avg << endl;
}