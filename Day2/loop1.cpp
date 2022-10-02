//Find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n -----

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n, m, i;
    double r = 0;
    cout << "Enter the limit for the series: " << endl;
    cin >> n;
    if (n == 0) {
        cout << "invalid input" << endl;
    }
    for(i=1; i<=n; i++) {
        double t = 1 / pow(i, i);
        cout << "1/" << i << "^" << i << " = " << t << endl;
        r += t;
    }
    cout << "The sum of the series is: " << r << endl;
    return 0;
}
