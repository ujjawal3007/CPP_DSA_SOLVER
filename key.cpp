#include <iostream>
using namespace std;
int tochecknumber(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while(start < end) {
        int sum = arr[start] + arr[end];
        if(sum == 0) {
            return 1;
        } else if(sum < 0) {
            start++;
        } else {
            end--;
        }
    }
    return 0;
}
int main() {
    int arr[] = {-3, -2, -1, 0, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    if(tochecknumber(arr, size)) {
        cout << "Pair found with sum 0" << endl;
    } else {
        cout << "No pair found with sum 0" << endl;
    }
    return 0;
}
