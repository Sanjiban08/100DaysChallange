// Use Right and Left Shift ----

#include <iostream>

int main() {
    using namespace std;
    int num = 212, i;
    cout << "Shift Right: " << endl;
    for (i = 0; i < 4; i++) {
        cout << "212 >> " << i << " = " << (212 >> i) << endl;
    }
    cout << "\nShift Left: " << endl;
    for (i = 0; i < 4; i++) {
        cout << "212 << " << i << " = " << (212 << i) << endl;
    }
    return 0;
}
