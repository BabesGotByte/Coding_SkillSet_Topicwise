class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> v1;
        vector<int> v2;
        int n=height.size();
        if(n==0){
            return 0;
        }
        int maxv=height[0];
        int count=0;
        for(int i=0;i<n;i++){
            maxv=max(maxv,height[i]);
            v1.push_back(maxv);
        }
        maxv=height[n-1];
        for(int i=n-1;i>=0;i--){
            maxv=max(maxv,height[i]);
            v2.push_back(maxv);
        }
        reverse(v2.begin(),v2.end());
        for(int i=0;i<n;i++){
            v1[i]=min(v1[i],v2[i]);
            count+=v1[i]-height[i];
        }
        return count;
    }
};
