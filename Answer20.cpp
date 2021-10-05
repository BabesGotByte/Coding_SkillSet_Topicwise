class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
              
    int n = nums.size();
    vector<vector<int>>ans;
	sort(nums.begin(), nums.end());
	for(int i=0;i<n-3;i++)
	{
		
		for(int j=i+1;j<n-2;j++)
		{
			int left = j+1;
			int right = n-1;
			int x = target - (nums[i] + nums[j]);
			
			while(left<right)
			{
				vector<int>quadraplet;
				if(nums[left]+nums[right]==x)
				{
					quadraplet.push_back(nums[i]);
					quadraplet.push_back(nums[j]);
					quadraplet.push_back(nums[left]);
					quadraplet.push_back(nums[right]);
					ans.push_back(quadraplet);
					left++;
					right--;
					
					// removing the duplicates of third number
					while(left< right && nums[left]==quadraplet[2])++left;
				
					// removing the duplicates of fourth number
					while(left<right && nums[right]==quadraplet[3])--right;
					
					
				
				}
				else if(nums[left] + nums[right] >x)
				{
					right--;
				}
				else{
					left++;
				}
			}
			// removing the duplicates of second number
			while(j+1<n && nums[j]==nums[j+1])j++;
			
		}
		while(i+1<n && nums[i]== nums[i+1])i++;
		
	}
	
	
	
        
       return ans;   
        
    }
};