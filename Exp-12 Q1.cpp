#include <iostream>
#include <stack>
using namespace std;
int main () {
    stack <string> cars;
    cars.push("BMW");
    cars.push("Audi");
    cars.push("Ford");
    cars.push("Mazda");
    cout << "Top element: " << cars.top() << endl;
    cout<< "Stack size: " << cars.size() << endl;
    cars.pop();
    cout << "Top element after pop: " << cars.top() << endl;
    cars.pop();
    while (!cars.empty()) {
        cout << "Elements in stack are:" << cars.top() << endl;
        cars.pop();
    }
    return 0;
}
