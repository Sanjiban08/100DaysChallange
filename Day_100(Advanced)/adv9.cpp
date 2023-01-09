//  C++ Program to find Square function using single template. ----

#include <iostream>
using namespace std;
template <class T>
inline T square(T x) {
    T result;
    result = x * x;
    return result;
};
int main() {
    int i, ii;
    float x, xx;
    double y, yy;
    i = 2;
    x = 2.2;
    y = 2.2;
    ii = square<int>(i);
    cout << i << ": " << ii << endl;
    xx = square<float>(x);
    cout << x << ": " << xx << endl;
    yy = square<double>(y);
    cout << y << ": " << yy << endl;
    yy = square(y);
    cout << y << ": " << yy << endl;
    return 0;
}
