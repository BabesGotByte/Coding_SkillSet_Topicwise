#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while(testCases--) {
        int n, wt;
        cin >> n;
        cin >> wt;
        int v[n], w[n];
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> w[i];
        }
        int arr[n+1][wt+1];
        for (int i = 0; i <= n; i++) {
            for(int j = 0; j <= wt; j++) {
                if (i == 0 || j == 0) {
                    arr[i][j] = 0;
                }
                else if (w[i-1] <= j) {
                    arr[i][j] = max(v[i-1]+arr[i-1][j-w[i-1]], arr[i-1][j]);
                }
                else {
                    arr[i][j] = arr[i-1][j];
                }
            }
        }
        cout << arr[n][wt] << endl;
        
    }
    return 0;
}
