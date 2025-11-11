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
    friend void grt(num1, num2);
};
class num2{
    private:
    int b;
    public:
    void accept(){
        cout<<"Enter the second number:";
        cin>>b;
    }
    friend void grt(num1, num2);
};
void grt(num1 x, num2 y){
    if(x.a>y.b){
        cout<<x.a<<" is greater than "<<y.b;
    }
    else{
        cout<<y.b<<" is greater than "<<x.a;
    }
}
int main() {
    num1 n1;
    num2 n2;
    n1.accept();
    n2.accept();
    grt(n1, n2);
    return 0;
}
