/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int> ans(nums.size());
        vector<int> pre(nums.size());
        vector<int> suff(nums.size());

        int last = nums.size();
        pre[0] = nums[0];
        suff[last - 1] = nums[last - 1];

        for (int i = 1; i < last; i++) {
            pre[i] = nums[i] * pre[i - 1];
        }

        for (int i = last - 2; i >= 0; i--) {
            suff[i] = nums[i] * suff[i + 1];
        }

        for (int i = 0; i < last; i++) {

            if (i == 0)
                ans[i] = pre[i] * suff[i + 1];
            else if (i == last - 1)
                ans[i] = pre[i - 1];
            else
                ans[i] = pre[i - 1] * suff[i + 1];
        }

        for (int i = 0; i < last; i++) {
            cout << pre[i] << " ";
        }

        cout << endl;

        for (int i = 0; i < last; i++) {
            cout << suff[i] << " ";
        }
        return ans;
    }
};
// @lc code=end

