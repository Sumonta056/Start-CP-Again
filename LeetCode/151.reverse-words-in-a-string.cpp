/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        stack<string> reverser;
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (temp != "")
                    reverser.push(temp);
                temp = "";
            } else
                temp += s[i];
        }
        if (temp != "")
            reverser.push(temp);

        temp = "";

        // Not this !reverser.empty()
        // cause it will add " " to last word also
        while (reverser.size() != 1) {
            temp += reverser.top() + ' ';
            reverser.pop();
        }

        // for stop adding space to last word
        temp += reverser.top();

        return temp;
    }
};
// @lc code=end

