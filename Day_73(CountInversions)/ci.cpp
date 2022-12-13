// A STL Set based approach for inversion count. ----

#include<bits/stdc++.h>
using namespace std;
int getInvCount(int arr[],int n) {
	multiset<int> set1;
	set1.insert(arr[0]);
	int invcount = 0; 
	multiset<int>::iterator itset1; 
	for (int i=1; i<n; i++) {
		set1.insert(arr[i]);
		itset1 = set1.upper_bound(arr[i]);
		invcount += distance(itset1, set1.end());
	}
	return invcount;
}
int main()
{
	int arr[] = {8, 4, 2, 1};
	int n = sizeof(arr)/sizeof(int);
	cout << "Number of inversions count are : "
		<< getInvCount(arr,n);
	return 0;
}
