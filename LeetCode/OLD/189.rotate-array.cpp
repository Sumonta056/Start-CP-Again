/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        long long n = nums.size();
        int index = 0;
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            index = i + k;
            if (index < n)
                ans[index] = nums[i];
            else
                ans[index % n] = nums[i];
        }

        nums = ans;
    }
};
// @lc code=end
