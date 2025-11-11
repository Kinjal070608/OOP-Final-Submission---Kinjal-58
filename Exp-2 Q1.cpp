#include <iostream>
using namespace std;
class city {
    public:
    string name;
    int population;
    void accept() {
        cout << "Enter city name: ";
        cin >> name;
        cout << "Enter population: ";
        cin >> population;
    }
    void disp() {
        cout<<"City having highest population: " << name << endl;
    }
};
int main() {
    city C[5];
    int i, max;
    for(i = 0; i < 5; i++) {
        C[i].accept();
    }
    max=C[0].population;
    for(i=0; i<5; i++) {
        if(C[i].population > max) {
            max = i;
        }
    }
    C[max].disp();
    return 0;
}
