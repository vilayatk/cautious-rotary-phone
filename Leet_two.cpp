#include <string>
#include <iostream>
using namespace std;

string gcdOfStrings(string str1, string str2)
{
    if (str1.size() < str2.size())
    {
        swap(str1, str2);
    }
    std::string backup = str1;
    std::string test = str2;
    int i = 1;
    string sub_str = "";
    while (i <= test.size())
    {
        std::string t = test.substr(0, i);
        while (str1.find(t) == 0)
        {
            str1.erase(str1.begin() + str1.find(t), str1.begin() + i + str1.find(t));
        }
        while (str2.find(t) == 0)
        {
            str2.erase(str2.begin(), str2.begin() + i);
        }

        if (str1.size() == 0 && str2.size() == 0 && i >= sub_str.size())
        {
            sub_str = t;
        }
        str1 = backup;
        str2 = test;
        i++;
    }
    return sub_str;
}