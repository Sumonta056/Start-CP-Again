#include <iostream>
#include <string>
#include <algorithm>

std::string addBinary(const std::string &a, const std::string &b) {
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    std::string result;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result += (sum % 2) + '0';
        carry = sum / 2;
    }

    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::string a = "11";
    std::string b = "1";
    std::cout << "Sum: " << addBinary(a, b) << std::endl;
    return 0;
}