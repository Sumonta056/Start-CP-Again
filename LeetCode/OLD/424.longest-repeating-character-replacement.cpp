/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
class Solution
{
public:
    int characterReplacement(string s, int k)
    {

        unordered_map<char, int> character;
        int left = 0;
        int right = 0;
        int ans = 0;
        int max_count = 0;

        for (right = 0; right < s.size(); right++)
        {
            character[s[right]] = 1 + character[s[right]];
            max_count = max(max_count, character[s[right]]);

            if (right - left + 1 - max_count > k)
            {
                character[s[left]] -= 1;
                left++;
            }

            else
            {
                ans = max(ans, right - left + 1);
            }
        }

        return ans;
    }
};
// @lc code=end
