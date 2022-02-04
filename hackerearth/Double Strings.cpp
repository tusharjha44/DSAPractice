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
        int flag =0 ,hsh[26]={0};
        for(int i=0;i<s.size();i++){
            hsh[s[i] - 'a']++;
        }
        for(int i=0;i<26;i++){
            if(hsh[i] >= 2){
                flag=1;
            }
        }

        if(flag == 1){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }

    }
    return 0;
}
