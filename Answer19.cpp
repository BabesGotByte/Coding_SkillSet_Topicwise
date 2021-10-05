class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        map<int,int>mp;
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            if(mp[target-nums[i]])
            {
                v.push_back(mp[target-nums[i]]-1);
                v.push_back(i);
                return v;
            }
            mp[nums[i]]=i+1;
        }
        
        return v;
        
    }
};