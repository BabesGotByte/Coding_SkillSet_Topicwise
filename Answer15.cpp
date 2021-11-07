class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ct=0,el;
        for(int i=0;i<nums.size();i++){
            if(ct==0)
                el=nums[i];
            if(el==nums[i])
                ct++;
            else
                ct--;
        }
        return el;
    }
};
