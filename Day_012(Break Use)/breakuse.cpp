//Print all the prime numbers between a given range -----

#include <iostream>
using namespace std;

int main() {
    int lr, ur; //lr = lower range, ur = upper range.
    cout << "Enter the lower range and upper range in which to find prime numbers: " << endl;
    cin>>lr>>ur;
    if(ur<=lr) {
        cout << "Upper Limit cannot be Lower or equal to lower Limit." << endl;
    }
    for(int n = lr; n <= ur; n++) {
        int i;
        for(i = 2; i < n; i++) {
            if(n%i == 0) {
                break;
            }
        }
        if(i == n) {
            cout << n << endl;
        }
    }
    return 0;
}
