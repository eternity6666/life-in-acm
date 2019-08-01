#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int maxn = 20;
const int maxm = 4000 + 5;
const int INF = 0x3f3f3f3f;

struct edge{int to, cap, rev;};
vector<edge> g[maxn];
bool used[maxn];

void add_edge(int from, int to, int cap)
{
    g[from].push_back((edge){to, cap, g[to].size()});
    g[to].push_back((edge){from, 0, g[from].size() - 1});
}

int dfs(int v, int t, int f)
{
    if(v == t) return f;
    used[v] = true;
    for(int i = 0; i < g[v].size(); i++)
    {
        edge &e = g[v][i];
        if(!used[e.to] && e.cap > 0)
        {
            int d = dfs(e.to, t, min(f, e.cap));
            if(d > 0)
            {
                e.cap -= d;
                g[e.to][e.rev].cap += d;
                return d;
            }
        }
    }
    return 0;
}

int max_flow(int s, int t)
{
    int flow = 0;
    for(;;)
    {
        memset(used, 0, sizeof(used));
        int f = dfs(s, t, INF);
        if(f == 0)return flow;
        flow += f;
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
        for(int j = 1; j <= m; j++)
        {
            int x, y, c;
            cin >> x >> y >> c;
            add_edge(x, y, c);
        }
        int ans = max_flow(1, n);
        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}

