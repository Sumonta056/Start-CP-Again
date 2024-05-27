/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string s) {
         unordered_map<string, char> wordToChar;
        unordered_map<char, string> charToWord;
        istringstream stream(s);
        string word;
        int i = 0;

        while (stream >> word) {
            if (i >= pattern.length())
                return false;
            char currentChar = pattern[i];

            if (wordToChar.find(word) == wordToChar.end() &&
                charToWord.find(currentChar) == charToWord.end()) {
                wordToChar[word] = currentChar;
                charToWord[currentChar] = word;
            } else {
                if (wordToChar[word] != currentChar ||
                    charToWord[currentChar] != word) {
                    return false;
                }
            }
            i++;
        }

        return i == pattern.length();
    }
};
// @lc code=end

