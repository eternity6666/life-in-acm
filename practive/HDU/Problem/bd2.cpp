#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1e3 + 10;
const int mod = 998244353;
const int inf = 0x3f3f3f3f;

int n,m;
int g[maxn][maxn];
int d[maxn][maxn];

int main()
{
    ios_base::sync_with_stdio(0);
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        memset(g, inf, sizeof(g));
        memset(d, 0, sizeof(d));
        for(int i = 0; i < m; i++)
        {
            int u, v, w; cin >> u >> v >> w;
            g[u][v] = g[v][u] = w;
        }
        for(int k = 1; k <= n; k++)
            for(int i = 1; i <= n; i++)
                for(int j = 1; j <= n; j++)
                {
                    if(g[i][j] > g[i][k]+g[k][j])
                    {
                        g[i][j] = g[i][k]+g[k][j];
                        d[i][j] = k;
                    }
                }
        int sum = 0;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
            {
                sum = (sum + d[i][j]) % mod;
                cout << d[i][j] << (j==n?"\n":" ");
            }
        cout << sum << endl;
    }
    return 0;
}
