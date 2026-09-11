#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int students = 1;
    int pagesum = 0;

    for (int i = 0; i < n; i++) {
        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        }
        else {
            students++;
            pagesum = arr[i];

            if (students > m || arr[i] > mid) {
                return false;
            }
        }
    }
    return true;
}


int toAllocate(vector<int>& arr, int n, int m) {
    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n = 5, m = 2;
    vector<int> arr = {10, 20, 30, 40, 50};

    cout << toAllocate(arr, n, m) << endl;
    return 0;
}





