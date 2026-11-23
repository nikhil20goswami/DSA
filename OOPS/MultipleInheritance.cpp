#include<iostream>
using namespace std;
class Cricketer{
public:
    int wickets;
    int runs;
    float average;
};
class Engineer{
public:
    string domain;
    int experience ;
};
class ExtraOrdinary : public Cricketer , public Engineer {
public : 
    string name;
    int age;
};
// void print(){
//     cout<<"Name : "<<e.name<<endl;
//     cout<<"Age : "<<e.age<<endl;
//     cout<<"Domain : "<<e.domain<<endl;
//     cout<<"Experience : "<<e.experience<<endl;
//     cout<<"Wickets : "<<e.wickets<<endl;
//     cout<<"Runs : "<<e.runs<<endl;
//     cout<<"Average : "<<e.average<<<endl;
// }
int main(){
    ExtraOrdinary e1;
    e1.name = "Saurav Netravalkar";
    e1.age = 35 ;
    e1.average = 20;
    e1.domain = "Senior Software Developer";
    e1.experience = 8 ;
    e1.wickets = 80 ;
    e1.runs = 1000;

    cout<<"Name : "<<e1.name<<endl;
    cout<<"Age : "<<e1.age<<endl;
    cout<<"Domain : "<<e1.domain<<endl;
    cout<<"Experience : "<<e1.experience<<endl;
    cout<<"Wickets : "<<e1.wickets<<endl;
    cout<<"Runs : "<<e1.runs<<endl;
    cout<<"Average : "<<e1.average<<endl;
}