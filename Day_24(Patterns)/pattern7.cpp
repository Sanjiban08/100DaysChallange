// Pyramid pattern for Numbers. ----

#include <iostream>
int main() {
    using namespace std;
    int n;
    cin>>n;
    int space = n-1;
    for(int i = 1;i<=n;i++) {
        for(int j = 1;j<=space;j++) {
            cout<<" ";
        }
        space--;
        for(int j = 1;j<=i;j++) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}