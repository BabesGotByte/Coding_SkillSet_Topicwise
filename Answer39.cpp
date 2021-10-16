#include <bits/stdc++.h>
using namespace std;

bool FindTriplet(int arr[], int arr_size, int sum)
{
	int l, r;
	sort(arr, arr + arr_size);

	for (int i=0; i<arr_size-2; i++)
	{
			l = i+1;
			r = arr_size-1;

			while(l < r)
			{
					if(arr[i] + arr[l] + arr[r] == sum)
					{
						printf("Found triplet is %d, %d, %d", arr[i], arr[l], arr[r]);
						return true;
					}
					else if(arr[i] + arr[l] + arr[r] < sum) l++;
					else r--;
			}
	}

	return false;
}

int main()
{
	int arr[] = {1, 4, 45, 6, 10, 8};
	int sum = 22;
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	FindTriplet(arr, arr_size, sum);

	return 0;
}
