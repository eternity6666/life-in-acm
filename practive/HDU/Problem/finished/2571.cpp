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

int main()
{
    freopen("in.txt", "r", stdin);
    int c;
    scanf("%d", &c);
    while(c--)
    {
        int n, m;
        int mm[22][1005];
        int dp[22][1005];

        memset(dp, -9999999, sizeof(dp));
        memset(mm, 0, sizeof(mm));
        scanf("%d %d", &n, &m);
        fadd(i, 1, n)
            fadd(j, 1, m)
                scanf("%d", &mm[i][j]);
        
        dp[0][1] = dp[1][0] = 0;
        fadd(i, 1, n)
            fadd(j, 1, m)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                fadd(k, 2, m)
                    if(j % k == 0)
                        dp[i][j] = max(dp[i][j], dp[i][j / k]);
                dp[i][j] += mm[i][j];
            }
        cout << dp[n][m] << endl;
    }
    return 0;
}


