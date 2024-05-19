/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(int n) {
        int res = 0 ;
        while(n > 0){
            res += n%2;
            n = n >> 1;
        }
        return res;

        /*
        n = 11 (1011) : Track The Last Bit n%2 
        n >> 1 ; 101 // Right Shiftting
        n >> 1 : 10
        n >> 1 : 1
        */
    }
};
// @lc code=end

