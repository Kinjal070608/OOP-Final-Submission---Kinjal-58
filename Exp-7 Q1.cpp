#include <iostream>
using namespace std;
class Area {
    private:
    float l, b;
    public:
    void area(float l) {
        float area;
        area=l*l;
        cout<<"Area of square: "<<area<<endl;
    }
    void area(float l, float b) {
        float area;
        area=l*b;
        cout<<"Area of rectangle: "<<area<<endl;
    }
};
int main() {
    Area a1;
    a1.area(8);
    a1.area(4, 12);
    return 0;
}
