class Solution {
  public:
    int maxs(int a,int b){
      if(a>b)
        return a;
      else
        return b;
    }
  public:
    int lengthOfLongestSubstring(string s) {
      int max=0;
      map<char,int>hash;
      int i=0;
      int j=0;
      while(j<s.length()){
        if(hash.count(s[j])) {
          i=maxs(hash[s[j]],i);
        }
        hash[s[j]]=j+1;
        max=maxs(j-i+1,max); 
        j=j+1;
      }
      return max;
    }
};

