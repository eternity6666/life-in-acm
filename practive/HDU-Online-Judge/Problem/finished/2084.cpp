#include <iostream>
using namespace std;
const int maxn = 100 + 5;

int dp[maxn][maxn], f[maxn][maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int c;
    scanf("%d", &c);
    while(c--)
    {
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                scanf("%d", &f[i][j]);
                if(i == n)
                    dp[i][j] = f[i][j];
            }
        }
        for(int i = n - 1; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + f[i][j];
        }
        cout << dp[1][1] << endl;
        /*
        int ans = -1;
        for(int j = 1; j <= n; j++)
        {
            if(dp[n][j] > ans)
                ans = dp[n][j];
        }
        cout << ans << endl;
        */
    }
    return 0;
}
