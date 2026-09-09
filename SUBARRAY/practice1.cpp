#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    while(left < right) {
        int width = right - left;
        int currentHeight = min(height[left], height[right]);
        int currentWater = width * currentHeight;
        maxWater = max(maxWater, currentWater);

        if(height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    vector<int> height = {1, 5, 101, 107};
    cout << "MAXIMUM WATER: " << maxWater(height) << endl;
}
