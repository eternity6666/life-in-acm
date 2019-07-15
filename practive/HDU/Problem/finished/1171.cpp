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

int w[maxn];
int dp[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n))
    {
        if(n <= -1)
            break;
        memset(dp, 0, sizeof(dp));
        int len = 0;
        int sum = 0;
        fadd(i, 1, n)
        {
            int v, m;
            cin >> v >> m;
            fadd(j, len + 1, len + m)
                w[j] = v;
            len += m;
            sum += v * m;
        }
        int tmp = sum / 2;
        fadd(i, 1, len)
            fcut(j, tmp, w[i])
            {
                dp[j] = max(dp[j], dp[j - w[i]] + w[i]);
            }
        cout << sum - dp[tmp] << " " << dp[tmp] << endl;
    }
    return 0;
}


