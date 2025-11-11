#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main() {
    vector<char>v(10);
    int i;
    cout<<"Size="<<v.size()<<endl;
    for(i=0;i<10;i++) {
        v[i]=i+'a';
    }
    cout<<"Current Contents:"<<endl;
    for(i=0;i<10;i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n\n";
    cout<<"Expanding Vector"<<endl;
    for(i=0;i<10;i++) {
        v.push_back(i+10+'a');
    }
    cout<<"Size now="<<v.size()<<endl;
    cout<<"\nCurrent Contents:"<<endl;
    for(i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n\n";
    for(i=0;i<v.size();i++) {
        v[i]=toupper(v[i]);
    }
    cout<<"Modified Contents:"<<endl;
    for(i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
