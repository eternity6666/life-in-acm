#include <bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int dn, dp;
        dn = n - m;
        dp = m;
        int mins, maxs;
        if(dn >= dp)
            mins = min(dp, 1);
        else
        {
            if(dp % (dn + 1) != 0)
                mins = dp / (dn + 1) + 1;
            else
                mins = dp / (dn + 1);
        }
        maxs = dp;

        printf("%d %d\n", maxs, mins);
    }

    return 0;
}
