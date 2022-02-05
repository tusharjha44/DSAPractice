#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(arr) arr.begin(), arr.end()
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define vpi vector<pair<int, int>>
#define vpll vector<pair<long long, long long>>
#define pi pair<int, int>
#define pll pair<long long, long long>
#define mi map<int, int>
#define mll map<long long, long long>
#define F first
#define S second

int main()
{
    FIO

    int t;
    cin >> t;

    while (t--)
    {
        unordered_set<long long> s;
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < (n + m); ++i)
        {
            long long x;
            cin >> x;
            if (i < n)
            {
                s.insert(x);
            }
            else
            {
                auto it = s.find(x);
                if (it != s.end())
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                    s.insert(x);
                }
            }
        }
    }
}