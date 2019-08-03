#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 205;
const int inf = 0x3f3f3f3f;

int n;
double maze[maxn][maxn];
struct node{int x, y;};
node g[maxn];

double getDis(node a, node b);
double dijkstra()
{
    double dis[maxn];
    bool vis[maxn];
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < n; i++)
        dis[i] = inf;
    dis[0] = 0;
    for(int i = 0; i < n; i++)
    {
        int flag = -1;
        double mn = inf;
        for(int j = 0; j < n; j++)
        {
            if(!vis[j] && mn > dis[j])
            {
                mn = dis[j];
                flag = j;
            }
        }
        if(flag == -1) break;
        vis[flag] = 1;
        for(int j = 0; j < n; j++)
            if(!vis[j] && dis[j] > max(dis[flag], maze[flag][j]))
                dis[j] = max(dis[flag], maze[flag][j]);
    }
    return dis[1];

}

int main()
{
    int no = 0;
    while(~scanf("%d", &n) && n)
    {
        for(int i = 0; i < n; i++)
            cin >> g[i].x >> g[i].y;
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                maze[i][j] = maze[j][i] = getDis(g[i], g[j]);
        printf("Scenario #%d\nFrog Distance = %.3lf\n\n", ++no, dijkstra()); 
    }
    return 0;
}

double getDis(node a, node b)
{
    return sqrt((double)((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)));
}

