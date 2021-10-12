class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int> st;
        int n=s.size();
        int j=0;
        int maxva=0;
        for(int i=0;i<n;i++){
            if(st.find(s[i])==st.end()){
                st[s[i]]=i;
                maxva=max(maxva,i-j+1);
            }
            else{
                j=max(j,st[s[i]]+1);
                st[s[i]]=i;
                maxva=max(maxva,i-j+1);
            }
        }
        return maxva;
    }
};
