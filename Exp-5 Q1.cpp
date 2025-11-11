#include <iostream>
using namespace std;
class Num{
    int n, i, sum=0;
    public:
    Num() {
        n=10;
    }
    Num (Num &x) {
        n=x.n;
        for (i=1;i<=n;i++){
            sum=sum+i;
        }
        cout<<"Sum of first "<<n<<" numbers="<<sum;
    }
};
int main() {
    Num n;
    Num n1(n);
    return 0;
}
