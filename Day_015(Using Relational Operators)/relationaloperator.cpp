// Input a number and see if it's greater , lesset or equal compared to another given number ----

#include <iostream>
using namespace std;

int main() {
    int i, j;
    cout << "Enter the number to compare: " << endl;
    cin >>i;
    cout << "Enter the no be compared to" << endl;
    cin >>j;
    if(i>j) {
        cout << i << " is Greater than " << j << endl;
    }
    else if(i<j) {
        cout << i << " is Lesser than " << j << endl;
    }
    else if(i==j) {
        cout << i << " is Equal to " << j << endl;
    }
    return 0;
}