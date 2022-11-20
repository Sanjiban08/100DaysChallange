// Find the largest word in a given string. ----

#include <iostream>
#include <string>
using namespace std;
string LW(string text) {
	string rw, ts1;
	for (int x = 0; x < text.length(); x++) {
		if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x])<= 57))) {
			rw.push_back(text[x]);
		}
		else {
			break;
		}
	}
   for (int x = 0; x < text.length(); x++) {
		if (text[x] != ' ' && (int(text[x]) >= 65 && int(text[x]) <= 90) || (int(text[x]) >= 97 && int(text[x]) <= 122) || (int(text[x] >= 48 && int(text[x]) <= 57))) {
			ts1.push_back(text[x]);
			if (x + 1 == text.length() && ts1.length() > rw.length()) {
				rw = ts1;
			}
		}
		else {
			if (ts1.length() > rw.length()) {
				rw = ts1;
			}
			ts1.clear();
		}
	}
	return rw;
}
int main() {
	cout << "Original String: C++ is a general-purpose programming language. \nLongest word: " << LW("C++ is a general-purpose programming language.") << endl;
    cout << "\nOriginal String: Hello \nLongest word: " << LW("Hello") << endl;
	return 0;
}
