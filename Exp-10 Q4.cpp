#include <iostream>
using namespace std;
template <typename T>
class stack {
    T arr[100];
    int top;
    public:
    stack() {
        top = -1;
    }
    void push (T val) {
        if (top >= 99) {
            cout << "Stack Overflow!" << endl;
        }
        else {
            arr[++top] = val;
            cout << val << " pushed to stack." << endl;
        }
    }
    void pop() {
        if (top==-1) {
            cout << "Stack Underflow!" << endl;
        }
        else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }
    void display() {
        if (top==-1) {
            cout << "Stack is empty!" << endl;
        }
        else {
            cout << "Stack elements: ";
            for (int i=top; i>=0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    stack <int> s;
    int choice, val;
    do {
        cout<<"--- Stack Menu ---"<<endl;
        cout<<"1. Push\n2. Pop\n3. Display\n4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Enter value to push: ";
                cin>>val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice! Please try again."<<endl;
        }
    }
    while(choice != 4);
    return 0;
}
