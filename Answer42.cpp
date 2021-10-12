class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maxv=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                maxv=max(maxv,count);
            }
            else{
                count=0;
            }
        }
        return maxv;
    }
};
