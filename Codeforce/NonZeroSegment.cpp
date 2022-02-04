#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(arr) arr.begin(), arr.end()
#define ll long long
#define vll vector<long long>
#define mll map<long long, long long>

void tushar(){
    ll n;
	cin>>n;
	vll a(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	mll mp;
	mp[0]=1;
	ll pre=0;
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		pre+=a[i];
		if(mp.find(pre)!=mp.end())
		{
			mp.clear();
			mp[0]=1;
			pre=a[i];
			ans++;
		}
		mp[pre]=1;
	}
	cout<<ans<<endl;
}
    
int main(){
    FIO;
    tushar();
    return 0;
}
