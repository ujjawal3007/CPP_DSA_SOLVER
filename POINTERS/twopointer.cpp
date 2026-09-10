#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSumSorted(const std::vector<int>& nums, int target) {

    int left = 0;
    int right = nums.size() - 1;
    
    while (left < right) {
        int current_sum = nums[left] + nums[right];
        
        if (current_sum == target) {
            return {left, right}; 
        } 
        else if (current_sum < target) {
            left++;  
        } 
        else {
            right--;
        }
    }
    
    return {-1, -1};
}
