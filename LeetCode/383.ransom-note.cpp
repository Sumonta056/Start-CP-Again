/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int> charac(26, 0);

        for (int i = 0; i < ransomNote.size(); i++) {
            charac[ransomNote[i] - 'a']++;
        }

        for (int i = 0; i < magazine.size(); i++) {
            charac[magazine[i] - 'a']--;
        }

        // for (int i = 0; i < 26; i++) {
        //     cout << charac[i] ;
        // }

        bool status = true;
        for (int i = 0; i < ransomNote.size(); i++) {
            if (charac[ransomNote[i] - 'a'] > 0) {
                // cout << ransomNote[i];
                // cout << charac[ransomNote[i] - 'a'] ;
                status = false;
                break;
            }
        }

        return status;
    }
};
// @lc code=end

