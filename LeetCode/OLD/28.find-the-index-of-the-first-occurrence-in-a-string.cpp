/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
          int ans = -1;
        bool foundfirst = false;
        int n = needle.size();

        for (int i = 0; i < haystack.size(); i++) {
            if (haystack[i] == needle[0]) {
                if (n == 1)
                    return i;
                int temp = i;
                int j = i + 1;
                for (int k = 1; k < n; k++) {
                    if (haystack[j] != needle[k])
                        break;
                    if (haystack[j] == needle[k] && k == n - 1)
                        foundfirst = true;
                    j++;
                }
                if (foundfirst)
                    ans = temp;
            }
            if (foundfirst)
                break;
        }
        return ans;
    }
};
// @lc code=end

