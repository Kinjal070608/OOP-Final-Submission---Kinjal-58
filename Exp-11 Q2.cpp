#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector <int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"Initial vector:"<<endl;
    for(vector <int>::iterator it=v.begin();it!=v.end();++it) {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Multiply by 10"<<endl;
    for(vector <int>::iterator it=v.begin();it!=v.end();++it) {
        *it = (*it) * 10;
    }
    cout<<"New vector:"<<endl;
    for(vector <int>::iterator it=v.begin();it!=v.end();++it) {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
