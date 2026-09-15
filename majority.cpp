#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majority(std::vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int freq = 0;
    int ans = nums[0];
    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i - 1]) {
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > n/2) {
            return ans;
        }
        return ans;
    }
}
int main() {
    vector<int> nums = {1, 3, 4, 5, 4, 3, 3, 4};
    int result = majority(nums);
    cout << "Majority Element of this vector is :" << result << endl;
}