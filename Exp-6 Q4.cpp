#include <iostream>
#include <string>
using namespace std;
class Person {
    public:
    string name;
    int age;
    void getPersonDetials() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void ShowDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student: public Person {
    public:
    string course;
    void getDetails() {
        cout<<"Enter course:";
        cin>>course;
    }
    void ShowDetails() {
        Person::ShowDetails();
        cout << "Course: " << course << endl;
    }
};
class Employee: public Person {
    public:
    string company;
    void getEmployeeDetails() {
        cout<<"Enter company:";
        cin>>company;
    }
    void ShowEmployeeDetails() {
        Person::ShowDetails();
        cout << "Company: " << company << endl;
    }
};
class Intern: public Student, public Employee {
    public:
    void ShowInternDetails() {
        cout<<"\n----Intern Details----\n";
        Student::ShowDetails();
        ShowEmployeeDetails();
    }
};
int main() {
    Intern it;
    it.Student::getPersonDetials();
    it.getDetails();
    it.getEmployeeDetails();
    it.ShowInternDetails();
    return 0;
}
