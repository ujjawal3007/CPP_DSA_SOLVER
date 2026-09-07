#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxsubarray(vector<int>& nums) {
    int maxsum = nums[0];
    int currsum = nums[0];
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        currsum = max(nums[i], currsum + nums[i]);
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
}
int main(){
vector<int> arr1 = {2, -8, 9, 6, 10, -30, 10};
cout << "MAXIMUM SUM OF THIS ARRAY IS : " << maxsubarray(arr1) << endl;
}