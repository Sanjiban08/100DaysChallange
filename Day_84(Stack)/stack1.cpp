// Remove elements from a Stack. -----

#include <iostream>
#include <stack>
using namespace std;
void display_stack(stack<string> st);
int main() {
    stack<string> colors;
    colors.push("Red");
    colors.push("Orange");
    colors.push("Blue");
    cout << "Initial Stack: ";
    display_stack(colors);
    colors.pop();
    cout << "Final Stack: ";
    display_stack(colors);
    return 0;
}
void display_stack(stack<string> st) {
    while(!st.empty()) {
        cout << st.top() << ", ";
        st.pop();
    }
    cout << endl;
}