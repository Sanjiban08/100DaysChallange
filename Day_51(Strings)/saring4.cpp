// Change the case of each character of a given string. ----

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string change_Case(string text) {
	for (int x = 0; x < text.length(); x++) {
		if (isupper(text[x])) {
			text[x] = tolower(text[x]);
		}
		else {
			text[x] = toupper(text[x]);
		}
	}
	return text;
}
int main() {
	cout << "Original string: Sanjiban, After changing cases-> "<< change_Case("Sanjiban") << endl;
	return 0;
}
