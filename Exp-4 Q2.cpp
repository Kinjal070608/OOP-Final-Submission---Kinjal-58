#include <iostream>
using namespace std;
class number{
    private:
    int a, b, temp;
    public:
    void accept(){
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;
    }
    void disp(){
        cout<<"\nAfter swapping:"<<endl;
        cout<<"First number="<<a<<endl;
        cout<<"Second number="<<b;
    }
    friend void swap(number &);
};
void swap(number &n){
    n.temp=n.a;
    n.a=n.b;
    n.b=n.temp;
}
int main() {
    number n;
    n.accept();
    swap(n);
    n.disp();
    return 0;
}
