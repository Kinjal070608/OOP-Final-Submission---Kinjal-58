#include <iostream>
using namespace std;
template <class T>
class C {
    public:
    T num1=0;
    T num2=0;
    void accept() {
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
    }
    void add() {
        cout<<"\nSum: "<<num1+num2;
    }
    void sub() {
        cout<<"\nDifference: "<<num1-num2;
    }
    void mul() {
        cout<<"\nProduct: "<<num1*num2;
    }
    void div() {
        if(num2!=0)
            cout<<"\nQuotient: "<<num1/num2;
        else
            cout<<"\nDivision by zero is not allowed.";
    }
    void mod() {
        cout<<"\nRemainder: "<<num1%num2;
    }
};
int main() {
    C<int> obj;
    obj.accept();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    obj.mod();
    return 0;
}
