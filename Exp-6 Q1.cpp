#include <iostream>
#include <string>
using namespace std;
class Person {
    protected:
    int age;
    string name;
};
class Teacher:protected Person {
    protected:
    string subject;
};
class Student:protected Teacher {
    private:
    int roll_no;
    public:
    void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter roll number: ";
        cin >> roll_no;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Roll Number: " << roll_no << endl;
    }
};
int main() {
    Student s;
    s.accept();
    s.display();
    return 0;
}
