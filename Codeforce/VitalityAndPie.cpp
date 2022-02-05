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
#define mci map<char, int>
#define mll map<long long, long long>
#define F first
#define S second

const int N = 200100;

int main()
{
    FIO

    int n;
    cin >> n;
    string loc;
    cin>>loc;
    mi m;
    int rooms = (n - 1) * 2;
    int ans = 0;
    for (int i = 0; i != rooms; i += 2)
    {
        m[loc[i] - 'a']++;
        if (m[loc[i + 1] - 'A'] == 0)
        {
            ans++;
        }
        else
        {
            m[loc[i + 1] - 'A']--;
        }
    }

    cout<<ans<<"\n";

    return 0;
}
