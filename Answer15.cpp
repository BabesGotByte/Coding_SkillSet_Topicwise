class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
    }
};

//Input Format: N = 3, nums[] = {3,2,3}
//Result: 3

// When we just count the occurrences of each number and compare with half of the size of the array, you will get 3 for the above solution. 