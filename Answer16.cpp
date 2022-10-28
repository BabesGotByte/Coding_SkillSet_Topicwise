#include <bits/stdc++.h>

using namespace std;
vector < int > majorityElement(int arr[], int n) {
  vector < int > ans;
  for (int i = 0; i < n; i++) {
    int cnt = 1;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] == arr[i])
        cnt++;
    }

    if (cnt > (n / 3)) 
      ans.push_back(arr[i]);
  }

  return ans;
}

int main() {
  int arr[] = {1,2,2,3,2};
  vector<int> majority;
  majority = majorityElement(arr, 5);
  cout << "The majority element is" << endl;
  set < int > s(majority.begin(), majority.end());
  for (auto it: s) {
    cout << it << " ";
  }
}

//Output: The majority element is 2