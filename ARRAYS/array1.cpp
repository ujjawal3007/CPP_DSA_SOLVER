#include <iostream>
using namespace std;
int main() {
    int nums[7] = {1, 3, 5, 7, 9, -5, -24};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int sum = largest + smallest;
    for(int i = 0; i < 7; i++) {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
        sum = largest + smallest;
    }
    cout << "smallest: " << smallest << endl;
    cout << "largest: " << largest << endl;
    cout << "Sum: " << sum << endl;


}
