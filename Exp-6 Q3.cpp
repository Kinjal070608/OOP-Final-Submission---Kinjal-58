#include <iostream>
using namespace std;
class Number {
    protected:
    int num;
};
class Odd:protected Number {
    public:
    void accept() {
        cout << "Enter an odd number: ";
        cin >> num;
        if (num % 2 == 0) {
            cout << "The number is not odd. Please enter a valid odd number." << endl;
            accept();
        }
    }
    void display() {
        cout << "The odd number is: " << num << endl;
    }
};
class Even:protected Number {
    public:
    void accept() {
        cout << "Enter an even number: ";
        cin >> num;
        if (num % 2 != 0) {
            cout << "The number is not even. Please enter a valid even number." << endl;
            accept();
        }
    }
    void display() {
        cout << "The even number is: " << num << endl;
    }
};
int main() {
    Odd o;
    Even e;
    o.accept();
    e.accept();
    o.display();
    e.display();
    return 0;
}
