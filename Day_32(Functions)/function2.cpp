// Using function convert Binary to decimal. ----

int btod(int n) {
    int ans = 0;
    int x = 1;
    while(n>0) {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter a Binary Number"<<endl;
    cin>>a;
    cout<<btod(a);
    return 0;
}