#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

int dp[7][10];

void init()
{
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    fadd(i, 1, 7)
        fadd(j, 0, 9)
            fadd(k, 0, 9)
                if(j != 4 && !(j == 6 && k == 2))
                    dp[i][j] += dp[i - 1][k];
}

int f(int x)
{
    int d[10];
    int ans = 0;
    int len = 0;
    while(x)
    {
        ++len;
        d[len] = x % 10;
        x /= 10;
    }
    d[len + 1] = 0;
    fcut(i, len, 1)
    {
        fadd(j, 0, d[i] -1)
            if(d[i + 1] != 6 || j != 2)
                ans += dp[i][j];
        if(d[i] == 4 || (d[i + 1] == 6 && d[i] == 2))
            break;
    }
    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    init();
    int n, m;
    while(~scanf("%d %d", &n, &m) && (n + m))
    {
        cout << f(m + 1) - f(n) << endl;
    }
    return 0;
}


