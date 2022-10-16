// Write a program to output wheather a number is divisible by both 2 and 3 or divisible by only one of them----

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number" << endl;
    cin>>n;
    if(n%2==0 && 3==0) {
        cout << "Divisible by both" << endl;
    }
    else if(n%2==0) {
        cout << "Divisible by only 2" << endl;
    }
    else if(3==0) {
        cout << "Divisible by only 3" << endl;
    }
    else {
        cout << "Divisible by none" << endl;
    }
}