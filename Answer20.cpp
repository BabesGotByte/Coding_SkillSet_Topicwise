class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        set<vector<int>>ans;
        int n = nums.size();
        
        
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n ; j++)
            {
                int low = j+1;
                int high = n-1;
                
                while(low<high)
                {
                    int sum = nums[i] + nums[j] + nums[low] + nums[high];
                    if(sum == target)
                    {
                        ans.insert({nums[i], nums[j] , nums[low] , nums[high]});
                        low++;
                        high--;
                    }
                    else if(sum<target)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
            }
        }
        
        
        vector<vector<int>>req(ans.begin(), ans.end());
        return req;
        
        
    }
};