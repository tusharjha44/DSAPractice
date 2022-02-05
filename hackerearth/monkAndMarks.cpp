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
    map<int, multiset<string>> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cin>>name>>marks;

        mp[-1 * marks].insert(name);
    }

    for (auto &x : mp)
    {
        auto &students = x.S;
        auto &mark = x.F;
        for (auto student : students)
        {
            cout << student << " " << -1 * mark << "\n";
        }
    }
    return 0;
}