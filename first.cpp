#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, 1); // Each element is LIS of length 1 initially

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    // Test cases
    vector<int> nums1 = {10, 9, 2, 5, 3, 7, 101, 18};
    vector<int> nums2 = {0, 1, 0, 3, 2, 3};
    vector<int> nums3 = {7, 7, 7, 7, 7, 7, 7};
    
    cout << "Test case 1: [10, 9, 2, 5, 3, 7, 101, 18]" << endl;
    cout << "Length of LIS: " << lengthOfLIS(nums1) << endl << endl;
    
    cout << "Test case 2: [0, 1, 0, 3, 2, 3]" << endl;
    cout << "Length of LIS: " << lengthOfLIS(nums2) << endl << endl;
    
    cout << "Test case 3: [7, 7, 7, 7, 7, 7, 7]" << endl;
    cout << "Length of LIS: " << lengthOfLIS(nums3) << endl << endl;
    
    return 0;
}
