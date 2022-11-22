// Count number of duplicate characters in a given string. ----

#include <bits/stdc++.h>
using namespace std;
int test(std::string text) {
    int ctr = 0;
    sort(text.begin(),text.end());
    for(int i=0;i<text.size();i++) {
        if(text[i]==text[i+1]) {
            ctr = ctr + 1;
        }
    }
    return ctr;
}
int main() {
    string text = "Total number of unique characters of the said two strings.";
    cout << "Original String:\n";
    cout << text;
    cout << "\n\nNumber of duplicate characters in the said string: ";
    cout << test(text) << endl;
}
