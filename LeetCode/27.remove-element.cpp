/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution
    // * Two Pointer Approaches
        /*
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
        */
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0, j = nums.size() - 1;
        vector<int> temp(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                temp[k] = nums[i];
                k++;
                cout << temp[i] << endl;
            }
            else
            {
                temp[j] =  nums[i];
                j--;
            }
        }

        nums = temp; // Assign all values of temp to nums

        for(int i = 0; i < nums.size(); i++){
            cout<<nums[i]<<" ";
        }
        return k;
    }
};
// @lc code=end
