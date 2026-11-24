#include<iostream>
using namespace std;
class Loading{
public:
    void add(int a , int b){
        cout<<"Sum : "<<a+b<<endl;
    }
    void add(int a , int b , int c){
        cout<<"Sum : "<<a+b+c<<endl;
    }
    void sum(string a , string b , string c){
        cout<<"Name : "<<a+b+c<<endl;
    }
};
int main(){
    Loading a;
    a.add(20,20);
    a.add(20,20,20);
    a.sum("Nikhil ","Puri ","Goswami");

}