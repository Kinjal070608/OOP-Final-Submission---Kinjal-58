#include <iostream>
using namespace std;
class numbers{
    private:
    int a,b;
    public:
    int temp;
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
    void swap(numbers &n){
        n.temp=n.a;
        n.a=n.b;
        n.b=n.temp;
    }
};
int main() {
    numbers n;
    n.accept();
    n.swap(n);
    n.disp();
    return 0;
}
