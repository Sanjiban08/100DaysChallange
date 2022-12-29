// Insert elements in a Queue. ----

#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<string> animals;
    animals.push("Cat");
    animals.push("Dog");
    cout << "Queue: ";
    while(!animals.empty()) {
        cout << animals.front() << ", ";
        animals.pop();
    }
    cout << endl;
    return 0;
}