#include <iostream>
using namespace std;
class Academic {
    protected:
    float marks;
};
class Sports {
    protected:
    float score;
};
class Result: protected Academic, protected Sports {
    private:
    int totaL_score;
    public:
    void accept() {
        cout << "Enter the marks of the student: ";
        cin >> marks;
        cout << "Enter the sports score of the student: ";
        cin >> score;
    }
    void calculate() {
        totaL_score = marks + score;
        cout<<"The marks of the student is: "<<marks<<endl;
        cout<<"The sports score of the student is: "<<score<<endl;
        cout<<"The total score of the student is: "<<totaL_score<<endl;
    }
};
int main() {
    Result r;
    r.accept();
    r.calculate();
    return 0;
}
