#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> result;

    int max = 0;
    for (const auto &candy : candies)
    {
        if (candy > max)
            max = candy;
    }

    for (const auto &candy : candies)
        result.push_back(extraCandies >= max - candy);
        
    return result;
}