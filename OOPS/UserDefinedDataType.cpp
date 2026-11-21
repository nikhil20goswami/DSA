#include<iostream>
using namespace std;
class Student { // Name of the class is Student 
    public:
    int age; // These are attributes
    int roll_no; // These are attributes
    string name; // These are attributes

};
int main(){
    Student s1;
    s1.name = "Nikhil Puri Goswami";
    s1.roll_no = 48 ;
    s1.age = 20 ;

    cout<<"Name of the Student is : "<<s1.name<<endl;
    cout<<"Roll Number of Student : "<<s1.roll_no<<endl;
    cout<<"Age of Student : "<<s1.age<<endl;

}