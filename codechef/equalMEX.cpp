#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(arr) arr.begin(), arr.end()
#define ll long long
#define pb push_back
#define pi pair<int, int>
#define pll pair<long long, long long>
#define mi map<int, int>
#define F first
#define S second

void solve()
{
    int n;
    cin >> n;
    vector<int> f(n + 1);
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        f[x]++;
    }
    for(auto &x : f){
        cout<<x<<" ";
    }
    for (int i = 0; i <= n; i++)
    {
        if (f[i] == 0)
            break;
        if (f[i] < 2)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    FIO int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}