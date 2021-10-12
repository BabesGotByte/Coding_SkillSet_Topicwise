class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1){
            return n;
        }
        int count=0;
        int j=0,i=0;
        for(i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                continue;    
            }
            else{
                nums[j]=nums[i];
                j++;
                count++;
            }
        }
        nums[j]=nums[i];
        count++;
        return count;
