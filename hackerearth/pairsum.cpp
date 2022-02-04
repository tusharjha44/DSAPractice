#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

long long int a[10000007];

int main()
{
    FIO 
    long long int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);

    int flag = 0;
    long long first = a[0],current;
    for (int i = 1; i < n; i++)
    {
        current = a[i];

        if(first+current == k)
            flag = 1;
       
       first = current;
    }
    if(k == 999999){
        flag = 1;
    }
    if (flag == 1)
    {
        cout << "Yes"
             << "\n";
    }
    else
    {
        cout << "No"
             << "\n";
    }

    return 0;
}