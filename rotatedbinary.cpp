#include <iostream>
#include <vector>
using namespace std;
int tofindrotate(vector<int>& nums, int target){
    int start = 0;
    int end = nums.size() - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(target == nums[mid]) {
            return mid;
        }

        if(nums[start] <= nums[mid]) {
            if(nums[start] <= target && target < nums[mid]) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        else if(nums[mid] < target && target <= nums[end]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr1 = {64, 749, 765, 8, 9, 10, 21};
    int target = 64;
    cout << tofindrotate(arr1, target) << endl;
}
