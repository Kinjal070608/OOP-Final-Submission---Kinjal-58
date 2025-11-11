#include <iostream>
using namespace std;
class student {
    int roll_no;
    float percentage;
    public:
    void accept() {
        cout << "Enter the student roll number: ";
        cin >> roll_no;
        cout << "Enter student percentage: ";
        cin >> percentage;
    }
    void disp() {
        this->accept();
        cout << "\nStudent Roll Number: " << roll_no << endl;
        cout << "Student Percentage: " << percentage << endl;
    }
};
int main() {
    student S1;
    S1.disp();
    return 0;
}
