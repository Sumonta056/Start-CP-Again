/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int arraySize = nums.size();

        int maxSum = nums[0];
        int startIndex = 0;
        int endIndex = 0;

        int tempStartIndex = 0;
        int tempSum = 0;

        for (int i = 0; i < arraySize; i++)
        {
            tempSum += nums[i];

            if (tempSum > maxSum)
            {
                maxSum = tempSum;
                startIndex = tempStartIndex;
                endIndex = i;
            }

            if (tempSum < 0)
            {
                tempSum = 0;
                tempStartIndex = i + 1;
            }
        }

        // Printing The Subarray
        cout << "Subarray: ";
        for (int i = startIndex; i <= endIndex; i++)
        {
            cout << nums[i] << " ";
        }

        return maxSum;
    }
};
// @lc code=end
