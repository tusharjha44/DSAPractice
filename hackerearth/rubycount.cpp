#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
    
int main(){
    FIO
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int hsh[4]={0};
        for(int i=0;i<s.size();i++){
            if(s[i] == 'r'){
                hsh[0]++;
            }
            else if(s[i] == 'u'){
                hsh[1]++;
            }
            else if(s[i] == 'b'){
                hsh[2]++;
            }
            else if(s[i] == 'y'){ 
                hsh[3]++;
            }
        }
        int res=0;

        while(hsh[0] > 0 && hsh[1] > 0 && hsh[2] > 0 && hsh[3] > 0){
            res++;
            hsh[0]--;
            hsh[1]--;
            hsh[2]--;
            hsh[3]--;
        }
        cout<<res<<"\n";

    }
    return 0;
}