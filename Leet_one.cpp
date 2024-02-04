#include <string>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string merge_string = "";
    size_t p = 0;
    const auto max_len = word1.size() > word2.size() ? word1.size() : word2.size();

    for (size_t i = 0; i < max_len; i++)
    {
        if (i < word1.size())
        {
            merge_string.push_back(word1[i]);
        }
        if (i < word2.size())
        {
            merge_string.push_back(word2[i]);
        }
    }
    return merge_string;
}
