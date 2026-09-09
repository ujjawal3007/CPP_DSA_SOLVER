#include <iostream>
#include <vector>
using namespace std;
int totalcandidate(vector<int>& nums) {
    int candidate = 0;
    int count = 0;
    for(int x : nums) {
        if(count == 0) {
            candidate = x;
        }
        if(x == candidate) {
            count++;
        }
        else {
            count--;
        }
    }
    return candidate;
}
int main() {
vector<int> nums = {1, 1, 3, 5, 3, 5, 10};
cout << "CANDIDATE : " << totalcandidate(nums) << endl;
}

