// Solution to Majority Element (> N/2 times)
class Solution {
public:
    int majorityElement(vector <int> &nums) {
        int Frequency = 0, MajorityElement;
        for (auto num : nums) {
            if (Frequency == 0) {
                Frequency++;
                MajorityElement = num;
            }
            else if (num == MajorityElement) 
                Frequency++;
            else
            Frequency--;   
        }
        return MajorityElement;
    }
};