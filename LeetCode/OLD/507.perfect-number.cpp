/*
 * @lc app=leetcode id=507 lang=cpp
 *
 * [507] Perfect Number
 */

// @lc code=start
class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        bool checkPerfectNumber(int num)
        {
            vector<int> divisors;
            for (int i = 1; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    if (i == num / i)
                    {
                        divisors.push_back(i);
                    }
                    else
                    {
                        divisors.push_back(i);
                        divisors.push_back(num / i);
                    }
                }
            }

            int sum = 0;
            for (auto it : divisors)
            {
                if (it == num)
                    continue;
                cout << it << endl;
                sum += it;
            }
            cout << "Sum = " << sum << endl;

            if (sum == num)
                return true;
            return false;
        }
    }
};
// @lc code=end
