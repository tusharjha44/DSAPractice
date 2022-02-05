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
    int t;
    cin>>t;
    while(t--){
        set<string> party;
        int n;
        cin>>n;
        while(n--){
            string name;
            cin>>name;
            party.insert(name);
        }

        for(auto &x : party){
            cout<<x<<"\n";
        }
    }
    return 0;
}