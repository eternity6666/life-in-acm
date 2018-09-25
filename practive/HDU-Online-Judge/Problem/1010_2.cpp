#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 10;
int n, m, T;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
char maze[maxn][maxn];
bool flag = 0;

void dfs(int x, int y, int used);

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d %d", &n, &m, &T))
    {
        if(n == 0 && m == 0 && T == 0)
            break;
        flag = 0;
        int sx, sy;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
            {
                scanf("%c", &maze[i][j]);
                if(maze[i][j] == 'S')
                {
                    sx = i;
                    sy = j;
                }
            }
        dfs(sx, sy, 0);
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

void dfs(int x, int y, int used)
{
    if(x < 1 || y < 1 || x > n || y > m)
        return ;
    if(maze[x][y] == 'X')
        return ;
    if(used > T)
        return ;
    if(maze[x][y] == 'D' && used == T)
    {
        flag = 1;
        return ;
    }
    for(int i = 0; i < 4; i++)
        dfs(x + dx[i], y + dy[i], used + 1);
}
