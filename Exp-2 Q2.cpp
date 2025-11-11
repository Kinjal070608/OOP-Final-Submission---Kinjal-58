#include <iostream>
using namespace std;
class account {
    public:
    int acc_no;
    float balance;
    void accept() {
        cout << "Enter account number: ";
        cin >> acc_no;
        cout << "Enter balance: ";
        cin >> balance;
    }
    void disp() {
        cout<<"\nAccount Number: " << acc_no;
        cout<<"\nAccount Balance: " << balance << endl;
    }
};
int main() {
    account A[10];
    int i;
    for(i = 0; i < 10; i++) {
        A[i].accept();
    }
    for(i = 0; i < 10; i++) {
        if(A[i].balance >= 5000) {
            A[i].balance=A[i].balance + (0.1 * A[i].balance);
            A[i].disp();
        }
    }
    return 0;
}
