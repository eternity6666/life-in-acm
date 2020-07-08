#include <iostream>
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 500 + 5;
int g[maxn][maxn];
int team[maxn];
bool used[maxn];
int d[maxn], len[maxn];
int n, m, c1, c2;

void dijkstra()
{
    fill(d, d + n, inf);
    fill(used, used + n, false);
    fill(len, len + n, 0);
    len[c1] = team[c1];
    d[c1] = 0;
    while (true)
    {
        int v = -1;
        for (int u = 0; u < n; ++u)
        {
            if (!used[u])
            {
                if (v == -1)
                    v = u;
                else
                {
                    if (d[u] < d[v])
                        v = u;
                    else if (d[u] == d[v] && team[u] > team[v])
                        v = u;
                }
            }
        }
        if (v == -1)
            break;
        used[v] = true;
        for (int u = 0; u < n; ++u)
        {
            if (d[u] > d[v] + g[v][u])
            {
                len[u] = len[v] + team[u];
                d[u] = d[v] + g[v][u];
            }
            else if (d[u] == d[v] + g[v][u])
                if (len[u]< len[v]+team[u] )
                    len[u] = len[v] + team[u];
        }
    }
    cout << d[c2] << " " << len[c2] << endl;
}
int main()
{
    cin >> n >> m >> c1 >> c2;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            g[i][j] = inf;
    for (int i = 0; i < n; ++i)
        team[i] = 0;
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        team[tmp - 1] += 1;
    }
    for (int i = 0; i < m; ++i)
    {
        int x, y, l;
        cin >> x >> y >> l;
        g[x][y] = g[y][x] = (g[x][y] < l ? g[x][y] : l);
    }
    dijkstra();
    return 0;
}