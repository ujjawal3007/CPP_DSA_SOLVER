#include <iostream>
 using namespace std;

 int main() {
// TO CHECK THE ELIGIBILITY OF VOTING.

    int age;
    cin >> age;
    if (age >= 18) {
        cout << "Eligible for voting." << endl;
    }
    else {
       cout << "Not eligible for voting." << endl;
    } 
    return 0;
}
