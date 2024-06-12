/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> countCharacter;

        bool oddFound = false;
        int longest = 0;

        for (int i = 0; i < s.size(); i++) {
            countCharacter[s[i]]++;
        }

        for (auto it : countCharacter) {
            cout << it.first << " " << it.second << endl;

            int temp = it.second;

            if (temp % 2 != 0) {
                oddFound = true;
            }

            longest += temp / 2;
        }

        longest = 2 * longest;

        if (oddFound)
            longest++;

        return longest;
    }
};
// @lc code=end

