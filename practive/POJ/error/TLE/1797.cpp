// TLE
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int maxn = 1e3+5;
const int inf = 0x3f3f3f3f;

struct node{int x, sh, me;};
int n, m;
int maze[maxn][maxn];
int dir[maxn][maxn];

int floyd()
{
    int i, j, k;
    for(k = 1; k <= n; ++k)
        for(i = 1; i <= n; ++i)
            for(j = 1; j <= n; ++j)
                if(maze[i][k] != inf && maze[k][j] != inf && maze[i][k] + maze[k][j] < maze[i][j])
                {
                    maze[i][j] = maze[i][k] + maze[k][j];
                    dir[i][j] = max(dir[i][k], dir[k][j]);
                }
    return dir[1][n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    scanf("%d", &t);
    for(int tt = 1; tt <= t; ++tt)
    {
        printf("Scenario #%d:\n", tt);
        scanf("%d %d", &n, &m);
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
                maze[i][j] = inf;
        for(int i = 0; i < m; ++i)
        {
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            dir[u][v] = dir[v][u] = maze[u][v] = maze[v][u] = w;
        }
        cout << floyd() << endl;
    }
    return 0;
}

