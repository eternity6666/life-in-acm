#include <bits/stdc++.h>
using namespace std;
const int maxn = 500 + 5;
const int inf = 0x3f3f3f3f;

int g[maxn][maxn];
int team[maxn];
int n, m, c1, c2;
void dijkstra()
{
    int d[maxn], path[maxn], weight[maxn];
    bool used[maxn];
    fill(used, used + n, 0);
    for (int i = 0; i < n; ++i)
        d[i] = g[c1][i], path[i] = 0, weight[i] = weight[c1] + team[i];
    d[c1] = 0;
    path[c1] = 1;
    weight[c1] = team[c1];
    while (true)
    {
        int v = -1;
        for (int i = 0; i < n; ++i)
            if (!used[i] && (v == inf || d[i] < d[v]))
                v = i;
        if (v == -1)
            break;
        used[v] = true;
        for (int i = 0; i < n; ++i)
        {
            if (d[i] > d[v] + g[v][i])
            {
                // if (i == 2 || v == 2)
                //     cout << i << " " << path[i] << " " << v << " " << path[v] << endl;
                d[i] = d[v] + g[v][i];
                path[i] = path[v];
                weight[i] = weight[v] + team[i];
            }
            else if (d[i] == d[v] + g[v][i])
            {
                // if (i == 2 || v == 2)
                //     cout << i << " " << path[i] << " " << v << " " << path[v] << endl;
                path[i] += path[v];
                if (weight[i] < weight[v] + team[i])
                    weight[i] = weight[v] + team[i];
            }
        }
    }
    // cout << endl;
    // for (int i = 0; i < n; ++i)
    //     cout << path[i] << (i == n - 1 ? "\n" : " ");
    // for (int i = 0; i < n; ++i)
    //     cout << d[i] << (i == n - 1 ? "\n" : " ");
    cout << path[c2] << " " << weight[c2] << endl;
}

int main()
{
    cin >> n >> m >> c1 >> c2;
    for (int i = 0; i <= n; ++i)
    {
        team[i] = 0;
        for (int j = 0; j <= n; ++j)
            g[i][j] = inf;
    }
    for (int i = 0; i < n; ++i)
    {
        int tmp = 0;
        cin >> tmp;
        team[tmp - 1]++;
    }
    for (int i = 0; i < m; ++i)
    {
        int x, y, l;
        cin >> x >> y >> l;
        if (g[x][y] == inf)
            g[x][y] = g[y][x] = l;
        else
            g[x][y] = g[y][x] = (g[x][y] > l ? l : g[x][y]);
    }
    // for (int i = 0; i < n; ++i)
    //     for (int j = 0; j < n; ++j)
    //         cout << g[i][j] << (j == n - 1 ? "\n" : " ");
    dijkstra();
    return 0;
}