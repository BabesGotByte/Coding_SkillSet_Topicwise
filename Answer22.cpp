// C++ program to find the length of largest subarray with 0 sum
#include <bits/stdc++.h>
using namespace std;

// Returns Length of the required subarray
int maxLen(int arr[], int n)
{
	unordered_map<int, int> presum;

	int sum = 0; 
	int max_len = 0; 

	for (int i = 0; i < n; i++) {
		sum += arr[i];

		if (arr[i] == 0 && max_len == 0)
			max_len = 1;
		if (sum == 0)
			max_len = i + 1;

		if (presum.find(sum) != presum.end()) {
			max_len = max(max_len, i - presum[sum]);
		}
		else {
			presum[sum] = i;
		}
	}

	return max_len;
}

int main()
{
	int arr[] = { 15, -2, 2, -8, 1, 7, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Length of the longest 0 sum subarray is "
		<< maxLen(arr, n);

	return 0;
}
