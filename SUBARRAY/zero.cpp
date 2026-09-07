#include <iostream>
#include <vector>
using namespace std;
void nonzero(vector<int>& nums) {
int j = 0, n = nums.size();
for(int i = 0; i < n; i++) {
    if(nums[i] != 0) {
        swap(nums[i], nums[j]);
        j++;
    }
}
}
int main() {
vector<int> arr1 = {2, 9 ,0 ,7 ,9 ,0 ,5, 3};
nonzero(arr1);

cout << "MOVE ZEROES OF AN ARRAY : ";
for(int val : arr1) {
    cout << val << " ";
}
cout << endl;
}