#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 500 + 5;
int g[maxn][maxn];
int team[maxn];

int n, m, c1, c2;

void dijkstra()
{
    int d[maxn], len[maxn];
    bool used[maxn];
    fill(used, used + n, 0);
    fill(d, d + n, inf);
    fill(len, len + n, 0);

    d[c1] = 0;
    len[c1] = team[c1];
    while (true)
    {
        int v = -1;
        for (int i = 0; i < n; ++i)
        {
            if (!used[i])
            {
                if (v == -1)
                    v = i;
                else if (d[i] < d[v])
                    v = i;
                else if (d[i] == d[v] && team[i] > d[v])
                    v = i;
            }
        }
        if (v == -1)
            break;
        used[v] = 1;
        for (int i = 0; i < n; ++i)
        {
            if (d[i] > d[v] + g[v][i])
                d[i] = d[v] + g[v][i], len[i] = len[v] + team[i];
            else if (d[i] == d[v] + g[v][i] && len[i] < len[v] + team[i])
                len[i] = len[v] + team[i];
        }
    }
    printf("%d %d\n", d[c2], len[c2]);
}

int main()
{
    cin >> n >> m >> c1 >> c2;
    for (int i = 0; i < n; ++i)
    {
        team[i] = 0;
        for (int j = 0; j < n; ++j)
            g[i][j] = inf;
    }
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        team[tmp - 1]++;
    }
    for (int i = 0; i < m; ++i)
    {
        int x, y, l;
        cin >> x >> y >> l;
        g[x][y] = g[y][x] = (g[x][y] > l ? l : g[x][y]);
    }
    dijkstra();
    return 0;
}