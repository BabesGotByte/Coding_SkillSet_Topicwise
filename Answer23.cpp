//Q23) Count number of subarrays with given XOR(this clears a lot of problems).
#include <bits/stdc++.h>
using namespace std;
long long subarrayXor(int arr[], int n, int m)
{
	long long ans = 0;

	for (int i = 0; i < n; i++) {
		int xorSum = 0;

		for (int j = i; j < n; j++) {
			xorSum = xorSum ^ arr[j];

			if (xorSum == m)
				ans++;
		}
	}
	return ans;
}
int main()
{
    int i,array_size;
    
    cout << "\n\tOUTPUT of Question 23:\n";
    
    cout << "\n\t-------------------------------------";
    cout << "\n\tEnter Value for Array Size : ";
    cin >> array_size;
    
    cout << "\n\t-------------------------------------";
	int arr[array_size];
	for (i = 0; i < array_size; i++) {
      cout << "\n\tEnter Value for Position " << i << " : ";
      cin >> arr[i];
    }
    
	int n = sizeof(arr) / sizeof(arr[0]);
	int m = 6;

    
    cout << "\n\t-------------------------------------";
	cout << "\n\tNumber of subarrays having given XOR is "<< subarrayXor(arr, n, m);
	return 0;
}
