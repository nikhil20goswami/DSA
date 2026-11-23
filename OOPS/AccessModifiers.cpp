#include<iostream>
using namespace std;

class Student {
public:
    float marks;
    int roll_no;
    string name;

    Student(string name, int roll_no, float marks, int age) {
        this->age = age;
        this->marks = marks;
        this->name = name;
        this->roll_no = roll_no;
    }

    int getAge() { // Getter
        return age;
    }

    void setAge(int a) { // Setter;;;;;;;;;;;
        age = a;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
        cout << "Age: " << age << endl;
    }

private:
    int age;
};

int main() {
    Student s1("Nikhil Puri Goswami", 48, 8.50, 20);

    cout << "Before Updating Age:" << endl;
    s1.display();

    s1.setAge(19);

    cout << "\nAfter Updating Age:" << endl;
    s1.display();

    return 0;
}
