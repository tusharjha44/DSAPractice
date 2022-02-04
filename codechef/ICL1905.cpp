#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
    
int main(){
    FIO
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        int c[n+1],d[n+1],pf[n+1]={0};
        for(int i=1;i<=n;i++){
            cin>>c[i]>>d[i];
            pf[i] = pf[i-1] + c[i];
        }
        int maxAns=0;
	    for(int l=1;l<=n;l++){
	        int maxx = d[l],minn = d[l];
	        for(int r=l;r<=n;r++){
	            maxx = max(maxx,d[r]);
	            minn = min(minn,d[r]);
	            maxAns=max(maxAns,(((r-l+1)*a) - (pf[r] - pf[l-1]) - ((maxx-minn)*(maxx-minn))) );
                
	        }
	    }
        cout << maxAns << '\n';
    }
    return 0;
}
