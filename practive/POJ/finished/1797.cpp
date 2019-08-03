#include<iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
const int maxn = 1005;
const int inf = 0x3f3f3f3f;

int n, m;
int maze[maxn][maxn];

int dijkstra()
{
    int dis[maxn];
    bool vis[maxn];
    memset(vis, 0, sizeof(vis));
    for(int i = 1; i <= n; i++)
    {
        maze[i][i] = 0;
        dis[i] = maze[1][i];
    }
    vis[1] = 1;
    for(int i = 1; i <= n; ++i)
    {
        int mn = -1;
        int k = -1;
        for(int j = 1; j <= n; j++)
        {
            if(!vis[j] && dis[j] > mn)
            {
                k = j;
                mn = dis[j];
            }
        }
        vis[k] = 1;
        for(int j = 1; j <= n; ++j)
            if(!vis[j])
                dis[j] = max(min(dis[k], maze[k][j]), dis[j]);
    }
    return dis[n];
}

void init()
{
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            maze[i][j] = (i == j ? 0 : -inf);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();
    int t; cin >> t;
    for(int o = 1; o <= t; ++o)
    {
        cin >> n >> m;
        init();
        for(int i = 1; i <= m; ++i)
        {
            int u, v, w; cin >> u >> v >> w;
            if(maze[u][v] < w) maze[u][v] = maze[v][u] = w;
        }
        cout << "Scenario #" << o << ":\n";
        cout << dijkstra() << endl << endl;
    }
}

