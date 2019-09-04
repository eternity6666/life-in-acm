/*
#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
const int maxn = 2e5 + 10;
const int inf = 0x3f3f3f3f;

int head[maxn];
struct en
{
    int to, w, next;
};
en edge[maxn];

void addedge(int u, int v, int w, int k)
{
    edge[k].to = v;
    edge[k].w = w;
    edge[k].next = head[u];
    head[u] = k;
}

int d[maxn];
int v[maxn];
int pre[maxn];
int n, m;

void dijkstra()
{
    memset(v, 0, sizeof(v));
    memset(d, inf, sizeof(d));
    for(int x = head[1]; x != -1; x = edge[x].next)
    {
        d[edge[x].to] = edge[x].w;
        pre[edge[x].to] = 1;
    }
    
    pre[1] = -1;
    v[1] = 1;
    d[1] = 0;
    for(int i = 1; i <= n; i++)
    {
        // cout << i << " ";
        int k = -1, mi = inf;
        for(int j = 1; j <= n; j++)
            if(!v[j] && d[j] < mi)
            {
                k = j;
                mi = d[j];
            }
        if(k == -1) break;
        v[k] = 1;
        for(int x = head[k]; x != -1; x = edge[x].next)
        {
            if(!v[x] && d[edge[x].to] > d[k] + edge[x].w)
            {
                d[edge[x].to] = d[k] + edge[x].w;
                pre[edge[x].to] = k;
                // for(int y = 1; y <= n; y++)
                //     cout << pre[y] << (y == n ? "\n" : " ");
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    memset(head, -1, sizeof(head));
    for (int i = 1; i <= m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        addedge(a, b, w, i);
        addedge(b, a, w, i + m);
    }
    dijkstra();
    if(d[n] == inf)
        cout << -1 << endl;
    else
    {
        stack<int> s;
        int num = 0;
        // for(int i = 1; i <= n; i++)
        //     cout << d[i] << (i == n ? "\n" : " ");
        for(int x = n; x != -1; x = pre[x])
        {
            // cout << x << endl;
            // if(num++>n) break;
            s.push(x);
        }
        int len = s.size();
        for(int i = 1; i <= len; i++)
        {
            cout << s.top() << (i == len ? "\n" : " ");
            s.pop();
        }
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
const int inf = INT_MAX;
const int maxn = 1e5 + 5;

int n, m, dis[maxn], pre[maxn];
vector<vector<P> > ve;
bitset<maxn> isDone;

bool dijkstra(int s, int e)
{
    priority_queue<P, vector<P>, greater<P> > pq;
    fill(dis, dis+n+1, inf);

    pq.push(P(0, s));
    dis[s] = 0;
    pre[s] = -1;
    while(!pq.empty())
    {
        int u = pq.top().second; pq.pop();

        if(u == e) return true;

        isDone[u] = true;

        for(auto pr : ve[u])
        {
            int v = pr.first, w = pr.second;
            if(!isDone[v] && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
                pq.push(P(dis[v], v));
                pre[v] = u;
            }
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;

    ve.resize(n+3);
    while(m--)
    {
        int u, v, w; cin >> u >> v >> w;
        ve[u].push_back(P(v,w));
        ve[v].push_back(P(u,w));
    }

    if(dijkstra(1, n))
    {
        stack<int> st;
        for(int x = n; x != -1; x = pre[x])
            st.push(x);
        int len = st.size();
        for(int i = 0; i < len; i++)
            cout << st.top() << (i == len - 1 ? "\n" : " "), st.pop();
    }
    else cout << -1 << endl;
    return 0;
}
