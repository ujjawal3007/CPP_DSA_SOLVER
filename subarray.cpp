#include <iostream>
using namespace std;
int main() {
    int arr[6] = {3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int st = 0; st < n; st++) {
        for(int end = st; end < n; end++) {
            cout << arr[end] << " ";
        }
        cout << endl;
    }
   return 0;
}