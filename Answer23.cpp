#include <bits/stdc++.h>
using namespace std;

class solution{
  int subarrCountWithGivenXor(vector<int> &arr, int m){
    unordered_map <int, int> mp;
    mp[0] = 1;
    int n = arr.size(), count = 0, curSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum ^= arr[i];
        if (mp[curSum ^ m] > 0)
            count += mp[curSum ^ m];
        mp[curSum]++;
    }
    return count;
  }
};
