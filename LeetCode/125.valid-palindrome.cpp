/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
         vector<char> cleanString;

        for (int i = 0; i < s.size(); i++) {
            if (isupper(s[i]) || islower(s[i])) {
                char temp = tolower(s[i]);
                cleanString.push_back(temp);
            }
            if (isdigit(s[i]))
                cleanString.push_back(s[i]);
        }

        // for (int i = 0; i < cleanString.size(); i++) {
        //     cout << cleanString[i];
        // }

        // if (cleanString.size() == 0)
        //     return true;

        bool result = true;
        int start = 0;
        int last = cleanString.size() - 1;

        while (start <= last) {
            // cout << cleanString[start] << " " << cleanString[last] << endl;
            if (cleanString[start] != cleanString[last]) {
                result = false;
                break;
            }
            last--;
            start++;
        }

        return result;
    }
};
// @lc code=end

