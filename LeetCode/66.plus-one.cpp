/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int i = digits.size() - 1;
        vector<int> ans;
        int carry = 0;
        bool one = true;

        while (i >= 0 || carry) {
            int sum = carry;

            if (i >= 0)
                sum += digits[i--];
            if (one) {
                sum += 1;
                one = false;
            }

            int result = (sum % 10);
            carry = sum / 10;

            ans.push_back(result);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
// @lc code=end

