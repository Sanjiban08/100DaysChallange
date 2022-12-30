// Remove elements form a Queue. ----

#include <iostream>
#include <queue>
using namespace std;
void display_queue(queue<string> q);
int main() {
    queue<string> animals;
    animals.push("Cat");
    animals.push("Dog");
    animals.push("Fox");
    cout << "Initial Queue: ";
    display_queue(animals);
    animals.pop();
    cout << "Final Queue: ";
    display_queue(animals);
    return 0;
}
void display_queue(queue<string> q) {
    while(!q.empty()) {
        cout << q.front() << ", ";
        q.pop();
    }
    cout << endl;
}