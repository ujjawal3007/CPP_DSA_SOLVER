#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxarraysum(vector<int> nums) {
    int maxsum = nums[0]; int currsum = 0;
    for(int val: nums) {
        currsum += val;
        maxsum = max(currsum, maxsum);
        if(currsum < 0) {
            currsum = 0;
        }
    }
    return maxsum;
}
int main() {
    vector<int> arr1 = {5, 6, 7, 9, 1, 3, 56, 78};
    cout << "MAXIMUM SUM OF THIS ARRAY IS : " << maxarraysum(arr1);
}

