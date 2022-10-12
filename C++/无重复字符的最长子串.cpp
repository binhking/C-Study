#include <iostream>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    vector<int> pos(128, -1);
    int ans = 0;
    for (int i = 0, j = 0; i < s.length(); i++)
    {
        j = max(j, pos[s[i]] + 1);
        ans = max(ans, i - j + 1);
        pos[s[i]] = i;
    }
    return ans;
}
int main()
{
    string str;

    cin >> str;

    cout << lengthOfLongestSubstring(str);

    return 0;
}
