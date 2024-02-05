#include <string>
#include <vector>
using namespace std;

string reverseVowels(string s)
{
    vector<int> places;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'A' ||
            s[i] == 'e' || s[i] == 'E' ||
            s[i] == 'i' || s[i] == 'I' ||
            s[i] == 'o' || s[i] == 'O' ||
            s[i] == 'u' || s[i] == 'U')
            places.push_back(i);
    }

    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        auto temp = s[places[i]];
        s[places[i]] = s[places[j]];
        s[places[j]] = temp;
        i++;
        j--;
    }
    return s;
}
