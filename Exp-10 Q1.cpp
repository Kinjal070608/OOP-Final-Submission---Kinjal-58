#include <iostream>
using namespace std;
template <typename T>
void SumArr(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
    sum+=arr[i];
    }
    cout << "Sum is: " << sum << endl;
}
int main() {
    int n=7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    float arr1[n]={1.1,1.2,1.3,1.4,1.5,1.6,1.7};
    double arr2[n]={1.89465,2.94865,3.84653,4.78456,5.48966,6.46853,7.21564};
    SumArr(arr, n);
    SumArr(arr1, n);
    SumArr(arr2, n);
    return 0;
}
