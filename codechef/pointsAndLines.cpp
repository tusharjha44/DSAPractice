#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    FIO 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<pair<int, int>> points(n);
        set<int> point_x,point_y;

        for (int i = 0; i < n; i++)
        {
            cin >> points[i].first >> points[i].second;
            point_x.insert(points[i].first);
            point_y.insert(points[i].second);
        }

        cout<<point_x.size()+point_y.size()<<"\n";

        
    }

    return 0;
}