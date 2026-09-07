#include <iostream>
using namespace std;
void bubblesort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        bool isswap = false;
        for(int j = 0; j < n - i- 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
        }
    }
}
void printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
int n = 8;
int arr[] = {4, 3, 9, 1, 0, 7, 5, -3};
bubblesort(arr, n);
printarray(arr, n);
return 0;
}
