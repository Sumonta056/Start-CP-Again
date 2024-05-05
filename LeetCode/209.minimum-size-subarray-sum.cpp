/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int minimumLength = INT_MAX;
        int sum = 0;

        while (right < nums.size()) {

            sum += nums[right++];

            while (sum >= target) {
                minimumLength = min(minimumLength, right - left);
                sum -= nums[left++];
            }
        }

        if (minimumLength == INT_MAX) {
            return 0;
        } else
            return minimumLength;
    }
};
// @lc code=end

