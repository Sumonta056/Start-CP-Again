/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
      // * Two Pointer Approaches
        /*
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
        */
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 0;
        vector<int> temp(nums.size());
        temp[k] = nums[0]; // Assign first value of nums to temp[0
        k++;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i-1])
            {
                temp[k] = nums[i];
                k++;
            }
        }

        nums = temp; // Assign all values of temp to nums

        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        return k;
      
    }
};
// @lc code=end
