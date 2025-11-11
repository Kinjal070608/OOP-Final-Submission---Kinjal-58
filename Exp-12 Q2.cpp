#include <iostream>
#include <queue>
using namespace std;
int main () {
    queue <int> age;
    age.push(25);
    age.push(30);
    age.push(35);
    age.push(40);
    cout << "Front element: " << age.front() << endl;
    cout << "Back element: " << age.back() << endl;
    cout << "Queue size: " << age.size() << endl;
    age.pop();
    cout << "Front element after pop: " << age.front() << endl;
    age.pop();
    while (!age.empty()) {
        cout << "Elements in queue are: " << age.front() << endl;
        age.pop();
    }
    return 0;
}
