#include <iostream>
using namespace std;
class student {
    string name;
    int roll_no;
    public:
    void accept() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student roll number: ";
        cin >> roll_no;
    }
    class marks {
        public:
        int phy;
        int maths;
        int total_p;
        int total_m;
        void accept() {
            cout << "Enter the total marks for physics: ";
            cin >> total_p;
            cout<<"Enter the marks obtained in physics: ";
            cin>>phy;
            cout << "Enter the total marks for maths: ";
            cin >> total_m;
            cout<<"Enter the marks obtained in maths: ";
            cin>>maths;
    }
    void disp() {
        float total=0;
        float percentage;
        total=total_p + total_m;
        percentage = ((phy + maths) / total) * 100;
        cout<<"\nPercentage obtained by the student= "<<percentage<<"%"<<endl;
    }
};
};
int main() {
    student s;
    s.accept();
    student::marks m;
    m.accept();
    m.disp();
    return 0;
}
