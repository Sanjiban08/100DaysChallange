// Sum of all SubArrays. ----

#include<bits/stdc++.h>
using namespace std;
long int SubArraySum(int arr[], int n)
{
	long int result = 0,temp=0;
	for (int i=0; i <n; i++)
	{
		temp=0;
		for (int j=i; j<n; j++)
		{
			temp+=arr[j];
			result += temp ;
		}
	}
	return result ;
}
int main()
{
	int arr[] = {1, 2, 3} ;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Sum of SubArray : "
		<< SubArraySum(arr, n) << endl;
	return 0;
}
