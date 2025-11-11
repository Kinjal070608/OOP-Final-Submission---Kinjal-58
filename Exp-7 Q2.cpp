#include <iostream>
using namespace std;
class Sum {
    private:
    int a,b,c,d,e,f,g,h,i,j;
    float k,l,m,n,o;
    public:
    void sum(float k, float l, float m, float n, float o) {
        float sum;
        sum = k + l + m + n + o;
        cout << "Sum of five floating numbers: " << sum << endl;
    }
    void sum(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
        int sum;
        sum = a + b + c + d + e + f + g + h + i + j;
        cout << "Sum of ten integers: " << sum << endl;
    }
};
int main() {
    Sum s1;
    s1.sum(1.2, 3.5, 5.6, 8.4, 1.5);
    s1.sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    return 0;
}
