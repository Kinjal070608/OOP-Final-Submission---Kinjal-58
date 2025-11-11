#include <iostream>
using namespace std;
class student {
    private:
    string name;
    float per;
    public:
    student () {
        name="Kinjal";
        per=92.6;
    }
    student (student &x) {
        name=x.name;
        per=x.per;
        cout<<"Name of the student:"<<x.name<<endl;
        cout<<"Percentage of the student:"<<x.per<<"%";
    }
};
int main() {
    student s;
    student s1(s);
    return 0;
}
