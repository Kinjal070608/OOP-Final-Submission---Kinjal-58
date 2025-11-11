#include <iostream>
using namespace std;
class staff {
    string name;
    public:
    string post;
    void accept() {
        cout << "Enter staff name: ";
        cin >> name;
        cout << "Enter staff post: ";
        cin >> post;
    }
    void disp() {
        cout<<"\nStaff Name: " << name << endl;
        cout<<"Staff Post: " << post << endl;
    }
};
int main() {
    staff S[5];
    int i;
    for(i = 0; i < 5; i++) {
        S[i].accept();
    }
    for(i = 0; i < 5; i++) {
        if(S[i].post == "HOD") {
            S[i].disp();
        }
    }
    return 0;
}
