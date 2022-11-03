// Convert a Octal number to A Decimal number. ----

int otod(int n) {
    int ans = 0;
    int x = 1;
    while(n>0) {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    cout<<otod(a);
    return 0;
}