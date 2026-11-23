#include<iostream>
using namespace std;
class Cricketer{
    public:
    int runs ;
    string name;
    Cricketer(string name , int runs){
        this->name = name;
        this->runs = runs;
    }
};
int main(){
    Cricketer c1("Virat Kohli" , 250000);
    Cricketer* c2 = new Cricketer("Rohit Sharma " , 20000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<(*c2).name<<" "<<(*c2).runs<<endl; // first way to do this 
    cout<<c2->name<<" "<<c2->runs<<endl; // second way to this 

    return 0 ;
}