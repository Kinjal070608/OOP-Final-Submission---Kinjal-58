#include <iostream>
using namespace std;
template <typename T>
T squr (T n) {
    return n*n;
}
template <>
string squr<string>(string str) {
    return str+str;
}
int main() {
    cout<<squr<int>(3)<<endl;
    cout<<squr<string>("Hello");
}
