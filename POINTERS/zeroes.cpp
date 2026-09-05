#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void movezeroes(vector<int>& nums) {
    int movezero = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != 0) {
            swap(nums[movezero++], nums[i]);
        }
    }
}
int main() {
    vector<int> arr1 = {2, 0, 9, 0, 7, 6, 4, 0, 7, 6 ,5 ,4};
    movezeroes(arr1);
    cout << "SYSTEMATIC WAY OF ACHIEVING VALUE IS: ";
    for(int value : arr1) {
        cout << value << ' ';
    }
    cout << endl;
}
