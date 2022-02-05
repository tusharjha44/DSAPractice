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
    FIO int n;
    map<string,int> mp;
    cin >> n;
    string s;
    while (n > 0)
    {
        cin >> s;
        if (mp[s])
        {
            cout << s << mp[s] << endl;
        }
        else
            cout << "OK" << endl;
        mp[s]++;
        n--;
    }

    return 0;
}