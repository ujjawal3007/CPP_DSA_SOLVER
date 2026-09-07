#include <iostream>
using namespace std;

 int main(){

//Find sum of all even number

    int n;
       cin >> n;
    int i = 1;
       int sum = 0;
       while (i<=n) {
         sum = sum + i;
        i = i+2;
    } 
    cout << "Sum of all even number = " << sum << endl;
   return 0 ;
}
