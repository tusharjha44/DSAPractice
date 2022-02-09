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

ll bSearch(ll sequence[], ll n, ll query, ll m)
{
    ll lo = 0, hi = n - 1;
    ll ans = sequence[n - 1];
    while (lo <= hi)
    {
        ll mid = (hi + lo) / 2;
        if (sequence[mid] + query <= m - 1)
        {
            ans = sequence[mid] % m;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return (ans + query) % m;
}

long long binsearch(long long arr[], long long n, long long x, long long m)
{

    long long start = 0, end = n - 1, ans = arr[n - 1];

    while (start <= end)
    {

        int mid = (start + end) / 2;

        if (arr[mid] + x <= m - 1)
        {

            ans = arr[mid] % m;

            start = mid + 1;
        }

        else

            end = mid - 1;
    }

    return (ans + x) % m;
}

int main()
{
    FIO
        ll n,
        m;
    cin >> n >> m;

    ll sequence[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> sequence[i];
        sequence[i] %= m;
    }

    sort(sequence, sequence + n);

    ll q;
    cin >> q;
    while (q--)
    {
        ll query;
        cin >> query;

        query %= m;

        cout << bSearch(sequence, n, query, m) % m << "\n";
    }

    return 0;
}