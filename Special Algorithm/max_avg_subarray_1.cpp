#include <iostream>
#include <vector>
#include <algorithm>

double findMaxAverage(std::vector<int>& nums, int k) {
    // Initial sum of the first k elements
    double current_sum = 0;
    for (int i = 0; i < k; ++i) {
        current_sum += nums[i];
    }
    
    double max_sum = current_sum;
    
    // Slide the window from k to the end of the array
    for (int i = k; i < nums.size(); ++i) {
        current_sum += nums[i] - nums[i - k];
        max_sum = std::max(max_sum, current_sum);
    }
    
    // Calculate the maximum average
    return max_sum / k;
}

int main() {
    // Example 1
    std::vector<int> nums1 = {1, 12, -5, -6, 50, 3};
    int k1 = 4;
    std::cout << "Maximum average subarray for nums = [1, 12, -5, -6, 50, 3] and k = 4 is " 
              << findMaxAverage(nums1, k1) << std::endl;

    // Example 2
    std::vector<int> nums2 = {5};
    int k2 = 1;
    std::cout << "Maximum average subarray for nums = [5] and k = 1 is " 
              << findMaxAverage(nums2, k2) << std::endl;

    return 0;
}
