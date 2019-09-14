#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4 + 10;
const int inf = 1e9 + 10;
struct node{int p, c;};
int n, m;

int main()
{
    ios_base::sync_with_stdio(0);
    while (cin >> n >> m)
    {
        vector<node> ve(n + 3);
        for (int i = 1; i <= n; ++i)
            cin >> ve[i].p >> ve[i].c;
        int dp[maxn];
        dp[0] = 0;
        for(int i = 1; i < maxn; ++i)
        {
            dp[i] = inf;
            for(int j = 1; j <= n; ++j)
                if(i >= ve[j].c)
                    dp[i] = min(dp[i], dp[i-ve[j].c] + ve[j].p);
        }
        int a, b;
        for(b = m; b < maxn; ++b)
            if(dp[b]!=inf)
                break;
        a = dp[b];
        for(int i = b; i < maxn; ++i)
            if(dp[i] <= a)
                b = i, a = dp[i];
        cout << a << " " << b << endl;
    }
    return 0;
}
