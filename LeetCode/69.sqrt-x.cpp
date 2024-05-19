/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
         long long high = x;
        long long low = 0;

        while (low <= high) {
            long long mid = (high + low) / 2;
            long long value = mid * mid;

            if (value == x) {
                return mid;
            } else if (value > x) {
                high = mid - 1;
            } else
                low = mid + 1;
        }

        return high;
    }
};
// @lc code=end

