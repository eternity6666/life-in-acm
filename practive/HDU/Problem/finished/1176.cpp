#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

int d[maxn][12];
int dp[maxn][12];

int maxx(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n))
    {
        if(n == 0)
            break;

        memset(d, 0, sizeof(d));
        memset(dp, 0, sizeof(dp));
        int maxt = -1;
        while(n--)
        {
            int x, t;
            scanf("%d %d", &x, &t);
            d[t][x]++;
            maxt = max(maxt, t);
        }
        fadd(i, 0, 10)
            dp[maxt][i] = d[maxt][i];
        fcut(i, maxt, 0)
            fadd(j, 0, 10)
                if(j == 0)
                    dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + d[i][j];
                else if(j == 10)
                    dp[i][j] = max(dp[i + 1][j - 1], dp[i + 1][j]) + d[i][j];
                else
                    dp[i][j] = maxx(dp[i + 1][j - 1], dp[i + 1][j], dp[i + 1][j + 1]) + d[i][j];
        cout << dp[0][5] << endl;
    }
    return 0;
}


