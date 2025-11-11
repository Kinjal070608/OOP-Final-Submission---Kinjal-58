#include <iostream>
using namespace std;
class college {
    private:
    int roll_no;
    string name;
    string course;
    public:
    college (int x, string y, string z="Computer Engineering") {
        roll_no=x;
        name=y;
        course=z;
    }
    void disp() {
        cout<<"Name of the student:"<<name<<endl;
        cout<<"Roll No. of the student:"<<roll_no<<endl;
        cout<<"Course of the student:"<<course;
    }
};
int main() {
    college c(58, "Kinjal");
    c.disp();
    return 0;
}
