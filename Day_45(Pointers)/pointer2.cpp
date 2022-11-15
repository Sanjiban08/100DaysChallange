// Changing Value Pointed by Pointers. ----

#include <iostream>
using namespace std;
int main() {
    int var = 5;
    int* pointVar;
    pointVar = &var;
    cout << "var = " << var << endl;
    cout << "*pointVar = " << *pointVar << endl
        << endl;
    cout << "Changing value of var to 7:" << endl;
    var = 7;
    cout << "var = " << var << endl;
    cout << "*pointVar = " << *pointVar << endl
        << endl;
    cout << "Changing value of *pointVar to 16:" << endl;
    *pointVar = 16;
    cout << "var = " << var << endl;
    cout << "*pointVar = " << *pointVar << endl;
    return 0;
}