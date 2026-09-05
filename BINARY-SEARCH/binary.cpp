#include <iostream>
#include <vector>
using namespace std;
int tofindmid(vector<int> nums, int target) {
int n = nums.size();
int start = 0; 
int end = n - 1;

while(start <= end) {
int mid = start + (end - start) / 2;
    if(target > nums[mid]) {
        start = mid + 1;
    }
    else if(target < nums[mid]){
        end = mid - 1;
    }
    else{
        return mid;
    }
}
return -1;
}
int main() {
    vector<int> arr1 = {2, 4, 6, 8 , 10 , 14, 16, 18};
   int target = 48;
   cout << tofindmid(arr1, target) << endl;
}
