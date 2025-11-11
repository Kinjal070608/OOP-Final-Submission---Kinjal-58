#include <iostream>
using namespace std;
class student {
    private:
    int roll_no;
    string name;
    public:
    void accept() {
        cout<<"Enter the student name and roll no:";
        cin>>name>>roll_no;
    }
    void disp() {
        cout<<"Student Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
}
};
int main() {
    student s1;
    s1.accept();
    s1.disp();
    return 0;
}
