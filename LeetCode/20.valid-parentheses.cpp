/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
               stack<char> bracket;

        for (char var : s) {

            if (var == '(' || var == '{' || var == '[') {
                bracket.push(var);
            } else {
                if (bracket.empty() || (var == ')' && bracket.top() != '(') ||
                    (var == '}' && bracket.top() != '{') ||
                    (var == ']' && bracket.top() != '[')) {
                    return false;
                }

                else
                    bracket.pop();
            }
        }



        return bracket.empty();
    }
};
// @lc code=end

