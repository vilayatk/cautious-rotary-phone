#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    int count = 0;

    if (flowerbed.size() == 1 && flowerbed[0] == 0 && n == 1)
        return true;

    for (size_t i = 0; i < flowerbed.size(); i++)
    {
        if (flowerbed[i] == 1)
            continue;
        if (i == 0 && (i + 1) < flowerbed.size() && flowerbed[i + 1] == 0)
        {
            count++;
            flowerbed[i] = 1;
        }
        else if (i > 0 && flowerbed[i - 1] == 0)
        {
            count++;
            if ((i + 1) < flowerbed.size() && flowerbed[i + 1] == 1)
            {
                count--;
                continue;
            }
            flowerbed[i] = 1;
        }
    }
    return count >= n;
}