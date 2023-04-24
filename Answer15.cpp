#include <bits/stdc++.h>
using namespace std;

class solution{
 
    int findMajority(vector<int> &arr)
    {
        int n = arr.size(), maj_index = 0, count = 1;
        for (int i = 1; i < n; i++) {
            if (arr[maj_index] == arr[i])
                count++;
            else
                count--;
            if (count == 0) {
                maj_index = i;
                count = 1;
            }
        }
 
        int res = arr[maj_index];
        count = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] == res)
                count++;
        }   
 
        if (count > n / 2)
            return res;
 
        return -1;
    }
 
};
