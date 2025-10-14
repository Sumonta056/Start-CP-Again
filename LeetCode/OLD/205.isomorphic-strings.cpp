/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
          unordered_map<char, char> map;
        unordered_map<char, int> free;

        bool status = true;

        for (int i = 0; i < s.size(); i++) {

            if (map[t[i]] != NULL && map[t[i]] != s[i]) {
                status = false;
                break;
            }

            if (map[t[i]] == NULL && free[s[i]] == 1) {
                status = false;
                break;
            }

            else {
                map[t[i]] = s[i];
                free[s[i]] = 1;
            }
        }

        return status;
    }
};
// @lc code=end

