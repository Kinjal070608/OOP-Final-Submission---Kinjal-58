#include <iostream>
using namespace std;
class result2;
class result1{
    private:
    string name;
    float marks;
    public:
    void accept(){
        cout<<"Enter student name:";
        getline(cin, name);
        cout<<"Enter the total marks obtained in first semester out of 100:";
        cin>>marks;
    }
    friend void average(result1, result2);
};
class result2{
    private:
    float marks;
    public:
    void accept(){
        cout<<"Enter the total marks obtained in second semester out of 100:";
        cin>>marks;
    }
    friend void average(result1, result2);
};
void average(result1 x, result2 y){
    float avg;
    avg=(x.marks+y.marks)/2;
    cout<<"\nAverage of both the results="<<avg;
}
int main() {
    result1 r1;
    result2 r2;
    r1.accept();
    r2.accept();
    average(r1,r2);
    return 0;
}
