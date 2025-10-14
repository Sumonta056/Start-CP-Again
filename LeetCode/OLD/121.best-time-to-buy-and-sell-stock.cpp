/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int buy = prices[0];
        int profit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < buy)
            {
                buy = prices[i];
            }

            else if (prices[i] - buy > profit)
            {
                profit = prices[i] - buy;
            }
        }

        return profit;
    }
};
// @lc code=end
