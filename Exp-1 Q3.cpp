#include <iostream>
using namespace std;
class Time {
    int H, M, S;
    public:
    void accept() {
        cout << "Enter time in hours minutes seconds format: ";
        cin >> H >> M >> S;
    }
    void calculate() {
        H=H*3600;
        M=M*60;
        S=S+H+M;
    }
    void disp() {
        cout << "Total time in seconds: " << S << endl;
    }
};
int main() {
    Time T1;
    T1.accept();
    T1.calculate();
    T1.disp();
    return 0;
}
