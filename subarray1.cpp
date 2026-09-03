#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[7] = { 1, 3, 5, 7, 9, 6, 5};
    int MAX_SUM = INT_MIN;
    for(int st = 0; st < n; st++) {
        int currSum = 0;
        for(int end = st; end < n; end++) {
            currSum += arr[end];
            MAX_SUM = max(currSum, MAX_SUM);
        }
    }
    cout << "MAX SUM OF ARRAY IS : " << MAX_SUM << endl;
    return 0;

}
