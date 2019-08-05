#include <iostream>
#include <cstring>
using namespace std;
const int inf = 0x3f3f3f3f;
const int maxn = 6e3 + 5;

int head[505];
struct  Edge{int to, w, next;};
Edge edge[maxn];
int n, m, w, num;

bool bellmanFord()
{
    int dis[maxn];
    for(int i = 0; i < n; i++) dis[i] = inf;
    dis[1] = 0;
    for(int i = 0; i < n - 1; i++)
        for(int j = 1; j <= n; j++)
        {
            if(dis[j] == inf) continue;
            for(int k = head[j]; k != -1; k = edge[k].next)
                if(edge[k].w != inf)
                    dis[edge[k].to] = min(dis[edge[k].to], dis[j]+edge[k].w);
        }

    /*
    for(int j = 1; j <= n; j++)
        cout << dis[j] << (j==n-1?"\n":" ");
        */

    for(int j = 1; j <= n; j++)
    {
        if(dis[j] == inf) continue;
        for(int k = head[j]; k != -1; k = edge[k].next)
            if(edge[k].w != inf && dis[edge[k].to] > dis[j] +edge[k].w)
                return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int f;
    cin >> f;
    while(f--)
    {
        num = 0;
        memset(head, -1, sizeof(head));
        cin >> n >> m >> w;
        for(int i = 0; i < m; i++)
        {
            int s, e, t; cin >> s >> e >>t;
            edge[num].to = e;
            edge[num].w = t;
            edge[num].next = head[s];
            head[s] = num++;
            edge[num].to = s;
            edge[num].w = t;
            edge[num].next = head[e];
            head[e] = num++;
        }
        for(int i = 0; i < w; i++)
        {
            int s, e, t; cin >> s >> e >>t;
            edge[num].to = e;
            edge[num].w = -t;
            edge[num].next = head[s];
            head[s] = num++;
        }
        // for(int i = 0; i <= n; i++)
        // {
        //     cout << i << "->";
        //     for(int k = head[i]; k != -1; k=edge[k].next)
        //         cout << endl << "   " << edge[k].to << " " << edge[k].w;
        //         // << (edge[k].next == -1?"":"->");
        //     cout << endl;
        // }
        // cout << num << endl;
        cout << (!bellmanFord() ? "YES" : "NO") << endl;
    }
    return 0;
}
