#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(arr) arr.begin(), arr.end()
#define ll long long
#define pb push_back
#define pi pair<int, int>
#define pll pair<long long, long long>
#define mi map<int, int>
#define F first
#define S second
    
int main(){
    FIO
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pi> travel;
        int k;
        ll f;
        cin>>k>>f;
        for(int i=0;i<n;i++){
            int dist,food;
            cin>>dist>>food;
            travel.pb({k-dist,food});
        }

        multiset<int> food_avl;
        sort(all(travel));
        bool can_reach = true;

        int curr=0,ans=0;

        for(int i=1;i<k;i++){
            f--;
            if(travel[curr].F == i){
                food_avl.insert(travel[curr].S);
                curr++;
            }

            if(f==0){
                if(food_avl.size() == 0){
                    can_reach = false;
                    break;
                }
                else{
                    auto it = --food_avl.end();
                    f += *it;
                    food_avl.erase(it);
                    ans++;
                }
            }

        }

        if(can_reach){
            cout<<ans<<"\n";
        }
        else{
            cout<<"-1\n";
        }

    }
    return 0;
}