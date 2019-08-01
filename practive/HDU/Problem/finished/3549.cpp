#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 20000;
const int maxm = 50000;

struct Edge{
    int v, f, nxt;
};

int src, sink;
int g[maxn + 10];
int nume;
Edge e[maxm * 2 + 10];

void addedge(int u, int v, int c)
{
    e[++nume].v = v;
    e[nume].f = c;
    e[nume].nxt = g[u];
    g[u] = nume;
    e[++nume].v = u;
    e[nume].f = 0;
    e[nume].nxt = g[v];
    g[v] = nume;
}

void init()
{
    memset(g, 0, sizeof(g));
    nume = 1;
}

queue<int> que;
bool vis[maxn + 10];
int dist[maxn + 10];

void bfs()
{
    memset(dist, 0, sizeof(dist));
    while(!que.empty())
        que.pop();
    vis[src] = true;
    que.push(src);
    while(!que.empty())
    {
        int u = que.front();
        que.pop();
        for(int i = g[u]; i; i = e[i].nxt)
            if(e[i].f && !vis[e[i].v])
            {
                que.push(e[i].v);
                dist[e[i].v] = dist[u] + 1;
                vis[e[i].v] = true;
            }
    }
}

int dfs(int u, int delta)
{
    if(u == sink)
        return delta;
    else
    {
        int ret = 0;
        for(int i = g[u]; delta && i; i = e[i].nxt)
            if(e[i].f && dist[e[i].v] == dist[u] + 1)
            {
                int dd = dfs(e[i].v, min(e[i].f, delta));
                e[i].f -= dd;
                e[i ^ 1].f += dd;
                delta -= dd;
                ret += dd;
            }
        return ret;
    }
}

int maxflow()
{
    int ret = 0;
    while(true)
    {
        memset(vis, 0, sizeof(vis));
        bfs();
        if(!vis[sink])
            return ret;
        ret += dfs(src, inf);
    }
}
int main()
{
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n, m;
        cin >> n >> m;
        src = 1;
        sink = n;
        init();
        for(int j = 0; j < m; j++)
        {
            int x, y, c;
            cin >> x >> y >> c;
            addedge(x, y, c);
        }
        int ans = maxflow();
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
