// Sum of first n natural numbers using Functions. ----

int sum(int n) {
    int ans = 0;
    for(int i=1; i<=n; i++) {
        ans += i;
    }
    return ans;
}
#include <iostream>
int main() {
    using namespace std;
    int a;
    cin>>a;
    cout<<sum(a);
    return 0;
}