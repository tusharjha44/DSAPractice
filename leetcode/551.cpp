#include <bits/stdc++.h>
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool checkRecord(string s)
{
    int a = 0, l = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else if (s[i] == 'L')
        {
            l++;
        }
        else{
            l=0;
        }
    }

    if (a < 2 && l <= 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    FIO

    string s;
    cin>>s;

    cout<<checkRecord(s)<<"\n";

    return 0;
}