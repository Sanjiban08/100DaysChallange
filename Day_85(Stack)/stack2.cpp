// Check if a Stack is empty. ----

#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<double> nums;
    cout << "Is the stack empty? ";
    if (nums.empty()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    cout << "Pushing elements..." << endl;
    nums.push(2.3);
    nums.push(9.7);
    cout << "Is the stack empty? "; 
    if (nums.empty()) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
