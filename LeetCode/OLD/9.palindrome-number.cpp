/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0)
            return 0;

        long long reverse = 0;
        long long temp = x;

        while (temp != 0) {

            reverse = 10 * reverse + temp % 10;
            temp = temp / 10;
        }

        if (reverse == x)
            return 1;
        else
            return 0;
    }
};
// @lc code=end

