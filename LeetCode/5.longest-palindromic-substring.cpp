/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    void expandNode(const string& s, int left, int right, int* start,
                    int* maxLength) {
        int n = s.size();

        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }

        int len = right - left - 1;
        if (len > *maxLength) {
            *start = left + 1;
            *maxLength = len;
        }
    }
    string longestPalindrome(string s) {

        int n = s.size();
        if (n == 0)
            return "";

        int start = 0, maxLength = 1;

        for (int i = 0; i < n; i++) {
            // Odd Palindrome
            expandNode(s, i, i, &start, &maxLength);

            // Even Palindrome
            expandNode(s, i, i + 1, &start, &maxLength);
        }

        return s.substr(start, maxLength);
    }
};
// @lc code=end

