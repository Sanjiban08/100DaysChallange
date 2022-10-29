// check if a number is Armstrong or not. ----

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum = 0, org_num = n;
    while(n > 0) {
        int rem = n%10;
        sum = sum+rem*rem*rem;
        n = n/10;
    }
    if(org_num == sum) {
        cout<<"The given number is Armstrong Number\n";
    } else {
        cout<<"The given number is not Armstrong Number\n";
    }
    return 0;
}