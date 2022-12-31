// Check if a Queue is empty. ----

#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> languages;
    cout << "Is the queue empty? "; 
    if (languages.empty()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    cout << "Pushing elements..." << endl;
    languages.push("Python");
    languages.push("C++");
    cout << "Is the queue empty? "; 
    if (languages.empty()) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
