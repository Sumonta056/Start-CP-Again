/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
            int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry; // Adding Previous Carry Bit
            if (i >= 0)
                sum += a[i--] - '0'; // Convert char to int and add
            if (j >= 0)
                sum += b[j--] - '0'; // Convert char to int and add
            result +=
                (sum % 2) + '0'; // Get the current bit and convert to char
            carry = sum / 2;     // Calculate the new carry
        }

       reverse(result.begin(),
                     result.end()); // The result is currently reversed

        return result;
    }
};
// @lc code=end

