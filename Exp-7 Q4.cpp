#include <iostream>
using namespace std;
class Number {
    private:
    int x;;
    public:
    void accept() {
        cout << "Enter a number: ";
        cin >> x;
    }
    void operator ++() {
        ++x;
    }
    void operator ++(int) {
        x++;
    }
    void display1() {
        cout << "(pre)The number is:"<<x<<endl;
    }
    void display2() {
        cout << "(post)The number is:"<<x<<endl;
    }
};
int main() {
    Number n1;
    n1.accept();
    ++n1;
    n1.display1();
    n1++;
    n1.display2();
    return 0;
}
