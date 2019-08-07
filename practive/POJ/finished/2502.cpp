#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <cstdio>
#include <map>
#include <utility>
#include <cmath>
using namespace std;
typedef pair<int, int> P;
const int maxn = 410;
const double inf = 0x3f3f3f3f;

map<int, P> ma;
int len = 0;
double maze[maxn][maxn];
double dist[maxn];

double getDist(P a, P b)
{
    return sqrt((double)((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second)));
}

bool vis[maxn];
int dijkstra()
{
    priority_queue<P, vector<P>, greater<P> > q;
    fill(dist, dist + maxn, inf);
    dist[1] = 0;
    q.push(P(0, 1));
    while(!q.empty())
    {
        P cur = q.top();
        q.pop();
        int u = cur.second;
        if(vis[u]) continue;
        vis[u] = 1;
        for(int j = 1; j <= len; ++j)
        {
            if(dist[u] + maze[u][j] < dist[j])
            {
                dist[j] = dist[u] + maze[u][j];
                q.push(P(dist[j], j));
            }
        }
    }
    return (int)(dist[2] + 0.5);
}

int main()
{
    int x, y;
    cin >> x >> y;
    ma[++len] = P(x, y);
    cin >> x >> y;
    ma[++len] = P(x, y);
    int a, b;
    int sub, sub2;
    sub = len + 1;
    while (~scanf("%d%d", &a, &b))
    {
        if(a==-1&&b==-1)
        {
            for (int i = sub; i < len; ++i)
            {
                double tmp = getDist(ma[i], ma[i+1])*3.0/2000.0;
                maze[i][i+1] = maze[i+1][i] = tmp;
            }
            sub = len + 1;
            continue;
        }
        ma[++len] = P(a, b);
    }
    for(int i = 1; i <= len; ++i)
        for (int j = i+1; j <= len; ++j)
            if(maze[i][j] == 0)
                maze[j][i] = maze[i][j] = getDist(ma[i], ma[j]) * 3.0 / 500.0;
    cout << dijkstra() << endl;
    return 0;
}
