#include <iostream>
using namespace std;
class num2;
class num1{
    private:
    int a;
    public:
    void accept(){
        cout<<"Enter the first number:";
        cin>>a;
    }
    friend void swap(num1 &, num2 &);
};
class num2{
    private:
    int b;
    public:
    void accept(){
        cout<<"Enter the second number:";
        cin>>b;
    }
    friend void swap(num1 &, num2 &);
};
void swap(num1 &x, num2 &y){
    int temp;
    temp=x.a;
    x.a=y.b;
    y.b=temp;
    cout<<"\nAfter swapping:"<<endl;
    cout<<"First number="<<x.a<<endl;
    cout<<"Second number="<<y.b<<endl;
}
int main() {
    num1 n1;
    num2 n2;
    n1.accept();
    n2.accept();
    swap(n1,n2);
    return 0;
}
