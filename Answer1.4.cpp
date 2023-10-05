#include <iostream>
#include <vector>

int kadanesAlgorithm(const std::vector<int>& nums) {
    int maxEndingHere = nums[0]; // Initialize maxEndingHere and maxSoFar to the first element of the array
    int maxSoFar = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        // Calculate the maximum ending at the current element
        maxEndingHere = std::max(nums[i], maxEndingHere + nums[i]);

        // Update the maximum subarray sum seen so far
        maxSoFar = std::max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main() {
    // Example usage:
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSubarraySum = kadanesAlgorithm(nums);

    std::cout << "Maximum subarray sum: " << maxSubarraySum << std::endl;

    return 0;
}
