/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> count;

        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }

        int freq = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (count[nums[i]] >= freq)
            {
                freq = count[nums[i]];
                ans = nums[i];
            }
        }

        return ans;
    }
};
// @lc code=end
