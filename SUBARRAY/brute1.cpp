#include <vector>
#include <iostream>
using namespace std;
vector<int> pairsum(vector<int> nums, int target) {
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    vector<int> ans;
    while(i < j) {
        int pairsum = nums[i] + nums[j];
        if(pairsum > target) {
            j--;
        }else if(pairsum < target) {
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main() {
    vector<int> nums = {2, 4, 6, 8, 10, 12, 21};
    int target = 31;
    vector<int> ans = pairsum(nums, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}
