#include <iostream>
using namespace std;
class rectangle {
    private:
    int l,b;
    public:
    rectangle() {
        l=2;
        b=3;
    }
    rectangle(int x) {
        l=x;
        b=x;
    }
    rectangle(int x,int y) {
        l=x;
        b=y;
    }
    rectangle(rectangle &r3) {
        l=r3.l;
        b=r3.b;
    }
    void calculate() {
        cout<<"The area is:"<<(l*b)<<endl;
    }
};
int main() {
    rectangle r1;
    r1.calculate();
    rectangle r2(3);
    r2.calculate();
    rectangle r3(6,6);
    r3.calculate();
    rectangle r4(r3);
    r4.calculate();
    return 0;
}
