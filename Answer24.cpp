// C++ program to find the length of the longest substring without repeating characters
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256
 
int longestUniqueSubsttr(string str)
{
    int n = str.size();
 
    int res = 0; 
    
    vector<int> lastIndex(NO_OF_CHARS, -1);

    int i = 0;

    for (int j = 0; j < n; j++) {

        i = max(i, lastIndex[str[j]] + 1);

        res = max(res, j - i + 1);
 
        lastIndex[str[j]] = j;
    }
    return res;
}
 
int main()
{
    string str = "hackotoberfest";
    cout << "Input string is *" << str <<"*"<< endl;
    int len = longestUniqueSubsttr(str);
    cout << "Length of the longest non-repeating character substring is "<< len;
    return 0;
}