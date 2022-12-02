// Find minimum (or maximum) element in an array. ----

#include <bits/stdc++.h>
using namespace std;
int getMin(int arr[], int n) {
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = min(res, arr[i]);
	return res;
}
int getMax(int arr[], int n) {
	int res = arr[0];
	for (int i = 1; i < n; i++)
		res = max(res, arr[i]);
	return res;
}
int main() {
	int arr[] = { 12, 1234, 45, 67, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Minimum element of array: " << getMin(arr, n)
		<< "\n";
	cout << "Maximum element of array: " << getMax(arr, n);
	return 0;
}
