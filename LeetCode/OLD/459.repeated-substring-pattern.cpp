/*
 * @lc app=leetcode id=459 lang=cpp
 *
 * [459] Repeated Substring Pattern
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        // Check From 0 - n/2 length all substrings
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                string subString = s.substr(0, i);
                string newString = "";

                for (int j = 1; j <= n / i; j++) {
                    newString += subString;
                }

                if (newString == s) {
                    return true;
                }
            }
        }

        return false;
    }
};
// @lc code=end

