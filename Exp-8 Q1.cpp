#include <iostream>
#include <string>
using namespace std;
class MyString {
    public:
    string str;
    MyString operator +(MyString &other) {
        MyString temp;
        temp.str = str + other.str;
        return temp;
    }
    void display() {
        cout << str << endl;
    }
};
int main() {
    MyString s1, s2, s3;
    s1.str = "XYZ";
    s2.str = "PQR";
    s3 = s1 + s2;
    cout<<"Concatenated string: ";
    s3.display();
    return 0;
}
