#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    FIO int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s;
        cin >> t;

        int hsh[256] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            hsh[s[i] - 'a']++;
        }

        for (int i = 0; i < t.size(); i++)
        {
            hsh[t[i] - 'a']--;
        }

        int res = 0;
        for (int i = 0; i < 256; i++)
        {
            res += abs(hsh[i]);
        }
        cout << res << "\n";
    }
    return 0;
}