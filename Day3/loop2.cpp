//Display the sum of the series [ 9 + 99 + 999 + 9999 ...] ----

#include <iostream>
using namespace std;

int main() {
    long int n, i, t = 9;
    int sum = 0;
    cout << "\n\n Display the sum of the series [ 9 + 99 + 999 + 9999 ...]\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        sum += t;
        cout << t << "  ";
        t = t * 10 + 9;
    }
    cout << "\n The sum of the sarise = " << sum << endl;
}
