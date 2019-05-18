#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 100 * 100 + 5;
const int mod = 1e9 + 7;
const int maxn = 100 + 5;

int g[maxn][maxn];
int n, a, b;

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d %d", &n, &a, &b))
    {
        fadd(i, 1, n)
            fadd(j, 1, n)
                g[i][j] = inf;
        fadd(i, 1, n)
        {
            int k;
            scanf("%d", &k);
            fadd(j, 1, k)
            {
                int ki;
                scanf("%d", &ki);
                if(j == 1)
                    g[i][ki] = 0;
                else
                    g[i][ki] = 1;
            }
        }
        
        fadd(k, 1, n)
            fadd(i, 1, n)
                fadd(j, 1, n)
                    g[i][j] = (g[i][j] > g[i][k] + g[k][j] ? g[i][k] + g[k][j] : g[i][j]);

        if(g[a][b] == inf)
            printf("-1\n");
        else
            printf("%d\n", g[a][b]);
    }
    return 0;
}


