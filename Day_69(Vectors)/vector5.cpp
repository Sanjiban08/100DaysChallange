//Iterate Through Vector Using Iterators. ----

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> num {1, 2, 3, 4, 5};
    vector<int>::iterator iter;
    for (iter = num.begin(); iter != num.end(); ++iter) {
        cout << *iter << "  ";
    }
    return 0;
}
