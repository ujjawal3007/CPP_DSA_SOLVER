#include <iostream>
#include <vector>
using namespace std;
int totalstudent(vector<int>& nums) {
    int student = 0;
    int count = 0;
    for(int x : nums) {
        if(count == 0) {
            student = x;
        }
        if(x == student) {
            count++;
        }
        else {
            count--;
        }
    }
    return student;
}
int main() {
vector<int> nums = {3, 3, 10, 8, 10};
cout << "CANDIDATE : " << totalstudent(nums) << endl;
}

