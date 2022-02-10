#include <bits/stdc++.h>

 

using namespace std;

bool cmp(pair<pair<int,int>,int> p1,pair<pair<int,int>,int> p2){

    int sum1 = p1.first.first+p1.first.second;

    int sum2 = p2.first.first+p2.first.second;

    if(sum1!=sum2){

        return sum1<sum2;

    }

    else

    {

        return p1.first.first<p2.first.first;

    }

}

int main() {

        ios_base::sync_with_stdio(false);

cin.tie(NULL);

    int test;

    cin>>test;


 

    while(test--){

        int n;

        cin>>n;

        vector<pair<pair<int,int>,int>> data(n);

        for(int i=0;i<n;i++){

            cin>>data[i].first.first>>data[i].first.second;

            data[i].second=i;


 

        }

        sort(data.begin(),data.end(),cmp);

        vector<int> res(n);

        for(int i=0;i<n;i++){

            res[data[i].second] = i;

        }

        for(int x: res){

            cout<<x<<" ";

        }

        cout<<"\n";

    }

}
