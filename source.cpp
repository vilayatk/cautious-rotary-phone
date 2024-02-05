#include <iostream>
#include "Leet_two.cpp"
#include <string>
#include <numeric>

class Solution
{
public:
    std::string gcdOfStrings(const std::string& str1, const std::string& str2) noexcept
    {
        for (int len = std::gcd(str1.length(), str2.length()); len >= 1; --len)
        {
            if (canDivide(str1, str2, len))
            {
                return { std::begin(str1), std::next(std::begin(str1), len) };
            }
        }
        return {};
    }

private:
    bool canDivide(const std::string& str1, const std::string& str2, int len) noexcept
    {
        for (int index = 0; index < std::max(str1.length(), str2.length()); ++index)
        {
            if (index < str1.length())
            {
                if (str1[index] != str1[index % len])
                {
                    return false;
                }
            }
            if (index < str2.length())
            {
                if (str2[index] != str1[index % len])
                {
                    return false;
                }
            }
        }
        return true;
    }
};