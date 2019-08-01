#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
const int maxn = 205;
const int maxm = 205;
const int inf = 0x3f3f3f3f;

struct edge{int to, cap, rev;};
vector<edge> g[maxn];
bool used[maxn];

void addEdge(int from, int to, int cap)
{
    g[from].push_back((edge){to, cap, g[to].size()});
    g[to].push_back((edge){from, 0, g[from].size()-1});
}

int dfs(int s, int t, int f)
{
    if(s == t)
        return f;
    used[s] = true;
    for(int i = 0; i < g[s].size(); i++)
    {
        edge &tmp = g[s][i];
        if(used[tmp.to] == false && tmp.cap > 0)
        {
            int d = dfs(tmp.to, t, min(f, tmp.cap));
            if(d > 0)
            {
                tmp.cap -= d;
                g[tmp.to][tmp.rev].cap += d;
                return d;
            }
        }
    }
    return 0;
}

int maxFlow(int s, int t)
{
    int flow = 0;
    while(true)
    {
        memset(used, 0, sizeof(used));
        int f = dfs(s, t, inf);
        if(f == 0)
            return flow;
        flow += f;
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    int n, m;
    while(cin >> n >> m)
    {
        memset(g, 0, sizeof(g));
        for(int i = 0; i < n; i++)
        {
            int s, e, c;
            cin >> s >> e >> c;
            addEdge(s, e, c);
        }
        int ans = maxFlow(1, m);
        cout << ans << endl;
    }
    return 0;
}

