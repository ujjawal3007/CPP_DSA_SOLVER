#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int* pointer = (&a);
    int** parponi = (&pointer);
    cout << &a << endl;
    cout << (pointer) << endl;
    cout << **(parponi) << endl;
}
