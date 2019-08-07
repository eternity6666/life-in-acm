#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e6 + 5;
const int inf = 0x3f3f3f3f;
typedef long long ll;
int head[maxn];
struct node{int v, next, w;} edge[maxn];
int a[maxn][3];
bool vis[maxn];
int dis[maxn];
int outque[maxn];
int n, m, k;
ll sum = 0;

void init()
{
    for(int i = 1; i <= n; i++)
        head[i] = 0, dis[i] = inf, vis[i] = 0;
    dis[1] = 0;
    k = 1;
}

void addedge(int u, int v, int w)
{
    edge[k].v = v;
    edge[k].w = w;
    edge[k].next = head[u];
    head[u] = k++;
}

void spfa()
{
    queue<int> q;
    vis[1] = 1;
    q.push(1);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        vis[u] = 0;
        for(int i = head[u]; i; i = edge[i].next)
        {
            int v = edge[i].v;
            int w = edge[i].w;
            if(dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;                
                if(!vis[v])
                {
                    q.push(v);
                    vis[v] = 1;
                }
            }
        }
    }
    for(int i = 2; i <= n; ++i)
        sum += dis[i];
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        cin >> n >> m;
        sum = 0;
        init();
        for(int i = 0; i < m; ++i)
        {
            scanf("%d%d%d", a[i], a[i] + 1, a[i] + 2);
            addedge(a[i][0], a[i][1], a[i][2]);
        }
        spfa();
        init();
        for(int i = 0; i < m; ++i)
            addedge(a[i][1], a[i][0], a[i][2]);
        spfa();
        printf("%lld\n", sum);
    }
    return 0;
}
