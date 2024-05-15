#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> plusOne(std::vector<int> &digits)
{
    int i = digits.size() - 1; // Start from the last digit
    std::vector<int> ans;      // To store the result
    int carry = 0;             // Carry initialized to 0
    bool one = true;           // To add one initially

    // Loop through the digits
    while (i >= 0 || carry)
    {
        int sum = carry; // Initialize sum with carry

        // Add the current digit if in bounds
        if (i >= 0)
            sum += digits[i--];

        // Add one to the first digit
        if (one)
        {
            sum += 1;
            one = false; // Ensure one is added only once
        }

        // Determine the result digit and new carry
        int result = (sum % 10); // Result digit
        carry = sum / 10;        // New carry

        // Append result digit to ans
        ans.push_back(result);
    }

    // Reverse the result vector
    std::reverse(ans.begin(), ans.end());

    return ans; // Return the result
}

int main()
{
    std::vector<int> digits = {1, 2, 3};
    std::vector<int> result = plusOne(digits);
    for (int num : result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}