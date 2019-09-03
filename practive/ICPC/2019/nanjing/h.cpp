/*
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int maxn = 305;
const int inf = 1e9 + 10;

ll n, m, g[maxn][maxn], g2[maxn][maxn];

void floyd()
{
    for(int k = 1; k <= n; ++k)
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
            {
                if(g[i][k] != inf && g[k][j] != inf)
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
                if(g2[i][k] != -inf && g2[k][j] != -inf)
                    g2[j][i] = max(g2[i][j], g2[i][k] + g2[k][j]);
            }
}

void query()
{
    floyd();
    // for(int i = 1; i <= n; i++)
    //     for(int j = 1; j <= n; j++)
    //         cout << g[i][j] << (j == n ? "\n": " ");
    ll s, t; cin >> s >> t;
    if(g2[s][t] != -inf)
    {
        cout << g2[s][t] << endl;
        g[s][t] = g2[s][t];
    }
    else
    {
        bool v[maxn];
        int dis[maxn];
        for(int i = 1; i <= n; i++)
        {
            v[i] = 0;
            dis[i] = g2[s][i];
        }
        v[s] = 0;
        for(int i = 1; i <= n; i++)
        {
            int k = -1, ma = -inf;
            for(int j = 1; j <= n; j++)
            {
                if(dis[j] > ma)
                {
                    k = j;
                    ma = dis[j];
                }
            }
            if(k == -1)
                break;
            v[k] = 1;
            for(int j = 1; j <= n; j++)
            {
                if(dis[j] < dis[k] + g2[k][j])
                    dis[j] = dis[k] + g2[k][j];
            }
        }
        int k = s, ma = dis[s];
        for(int i = 1; i <= n; i++)
        {
            if(dis[i] != inf)
            {
                ma = dis[i];
                k = i;
            }
        }
        g[k][t] = -g2[t][k];
        floyd();
        cout << g2[s][t] << endl;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
            {
                g[i][j] = (i == j ? 0 : inf);
                g2[i][j] = (i == j ? 0 : -inf);
            }
        for(int i = 1; i <= m; ++i)
        {
            ll x, y;
            cin >> x >> y;
            cin >> g[x][y];
            g2[y][x] = -g[x][y];
        }
        for(int i = 1; i <= 6; i++)
            query();
    }
    return 0;
}
*/