/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> mapNum;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            mapNum[nums[i]] = i;
        }

        for(int i = 0; i < n; i++){
            int diff = target - nums[i];
            cout << mapNum.count(diff)<<endl;
            if(mapNum.count(diff) && mapNum[diff] != i){
                return {i, mapNum[diff]};
            }
        }

        return {};
    }
};
// @lc code=end
