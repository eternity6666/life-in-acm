#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <cstring>
#include <cstdio>
using namespace std;
const int maxm = 150000 + 10;
const int maxn = 30000 + 10;
const int inf = 0x3f3f3f3f;

struct node{int to, w, next;} edge[maxm];
int head[maxn];
int n, m;
int dis[maxn];
typedef pair<int, int> P;

int dijkstra()
{
    dis[1] = 0;
    priority_queue<P, vector<P>, greater<P> > q;
    q.push(P(dis[1], 1));
    while(!q.empty())
    {
        P u = q.top();
        q.pop();
        int first = u.first;
        int last = u.second;
        if(dis[last] < first) continue;
        for(int j = head[last]; j != -1; j = edge[j].next)
        {
            if(dis[last] + edge[j].w < dis[edge[j].to])
            {
                dis[edge[j].to] = dis[last] + edge[j].w;
                q.push(P(dis[edge[j].to], edge[j].to));
            }
        }
    }
    return dis[n];
}

int main()
{
    while(~scanf("%d%d", &n, &m))
    {
        for(int i = 1; i <= n; i++)
            head[i] = -1, dis[i] = inf;
        for(int i = 0; i < m; i++)
        {
            int a, b, c; scanf("%d%d%d", &a, &b, &c);
            edge[i].to = b;
            edge[i].w = c;
            edge[i].next = head[a];
            head[a] = i;
        }
        cout << dijkstra() << endl;
    }
    return 0;
}
