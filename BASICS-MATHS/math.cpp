#include <iostream>
using namespace std;

string isprime(int n) {
    if (n <= 1) {
        return "Non prime";
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return "Non prime";
        }
    }
    return "Prime";
}

void toprint(int n) {
    int count = 0;
    while (n != 0) {
        int digit = n % 10;
        count++;
        cout << count << endl;
        n = n / 10;
    }
}

int main() {
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << isprime(n) << endl;
    toprint(n);
    return 0;
}
