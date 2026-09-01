#include <iostream>
using namespace std;
int tochecknumber(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while(start < end) {
        int mid = start + (end - start) / 2;
        if(mid > end) {
            mid = mid - 1;
        }
        else { mid = mid + 1;}
        return mid;
    }
    return -1;
}
int main() {
    int odd[7] = {1, 3, 5, 7, 9, 11, 13};
    int result = tochecknumber(odd, 7);
    cout << "Index of the element: " << result << endl;
    return 0;
}
