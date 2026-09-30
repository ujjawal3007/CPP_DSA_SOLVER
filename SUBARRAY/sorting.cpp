#include <iostream>
using namespace std;
bool issorted(int *arr, int n) {
    if(n == 0 || n == 1) {
        return true;
    }
    if(arr[0] > arr[1]) {
        return false;
    }
    else{
bool remainingpart = issorted(arr + 1, n - 1);
return remainingpart;
    }
}
int main() {
int arr[] = {1, 3, 5, 7, 91, 11};
int n = sizeof(arr) / sizeof(arr[0]);
bool ans = issorted(arr, n);
if(ans) {
    cout << "Array is sorted" << endl;
}
else{
    cout << "Arrays is not sorted" << endl;
}
}