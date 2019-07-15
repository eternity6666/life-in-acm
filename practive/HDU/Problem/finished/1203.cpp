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

int c[maxn];
double w[maxn];
double dp[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int n,m;
    while(cin >> n >> m)
    {
        if(n + m == 0)
            break;
        
        fadd(i, 0, n)
            dp[i] = 1;
        fadd(i, 1, m)
        {
            cin >> c[i] >> w[i];
            w[i] = 1 - w[i];
        }
        fadd(i, 1, m)
            fcut(j, n, c[i])
            {
                dp[j] = min(dp[j], dp[j - c[i]] * w[i]);
            }
        printf("%.1lf%%\n", (1 - dp[n]) * 100);
    }
    return 0;
}


