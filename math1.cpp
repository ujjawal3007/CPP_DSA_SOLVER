#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int sumOfCubes = 0;

    while (n != 0) {
        int digit = n % 10;
        sumOfCubes += digit * digit * digit;
        n = n / 10;
    }
    return sumOfCubes == original;
}
int main() {
    int n;
    cout << "ENTER THE NUMBER :" << endl;
    cin >> n;

    if (isArmstrong(n)) {
        cout << "YES It is an armstrong number" << endl;
    } else {
        cout << "NO It is not an armstrong number" << endl;
    }

    return 0;
}