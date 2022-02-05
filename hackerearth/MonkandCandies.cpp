#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
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
    
int main(){
    FIO
    ll t;
    cin>>t;
    while(t--){
        multiset<ll> m;
        ll n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            m.insert(x);
        }

        ll candy,total_candies=0;
        while(k--){
            auto curr_it = --m.end();
            candy = *curr_it/2;
            total_candies += *curr_it;
            m.erase(curr_it);
            m.insert(candy);
        }

        cout<<total_candies<<"\n";

    }
    return 0;
}