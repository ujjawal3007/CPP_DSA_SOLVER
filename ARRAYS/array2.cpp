#include <iostream>
using namespace std;
int tofindtarget(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}
int main() {
    int number[7] = {1, 2, 3, -4, -5, -7, -10};
    int n;
    cout << "Write a number : ";
    cin >> n;
    cout << "TARGET FOUND : "<< tofindtarget(number, 7, n) << endl;
    return 0;
}

