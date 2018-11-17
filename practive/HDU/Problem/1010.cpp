#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 10;

int n, m, t;
char c[maxn][maxn];
bool ans = 0;
bool flag[maxn][maxn];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int x, int y, int used);

int main()
{
    freopen("in.txt", "r", stdin);
    while(cin >> n >> m >> t)
    {
        if(n == 0 && m == 0 && t == 0)
            break;
        int sx, sy;
        ans = 0;
        fei(1, n)
            cin >> c[i];
        fei(1, n)
            fej(1, m)
            {
                flag[i][j] = 0;
                if(c[i][j] == 'S')
                {
                    sx = i;
                    sy = j;
                }
            }
        dfs(sx, sy, 0);
        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

void dfs(int x, int y, int used)
{
    if(used > t || x < 1 || x > n || y < 1 || y > m)
        return ;
    if(used == t && c[x][y] == 'D')
    {
        ans = 1;
        return ;
    }
    if(c[x][y] == 'X')
        return ;
    fei(0, 3)
    {
        flag[x][y] = 1;
        if(flag[x + dx[i]][y + dy[i]] == 0)
            dfs(x + dx[i], y + dy[i], used + 1);
        flag[x][y] = 0;
    }
}

/*
bool flag = 0;
char maze[maxn][maxn];
int n, m, T, sx, sy;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
bool visited[maxn][maxn];

void dfs(int x, int y, int used);

int main()
{
    freopen("in.txt", "r", stdin);
    while(cin >> n >> m >> T)
    {
        if(n == 0 && m == 0 && T == 0)
            break;
        flag = 0;
        fei(1, n)
            cin >> maze[i];
        fei(1, n)
        {
            fej(1, m)
            {
                visited[i][j] = 0;
                if(maze[i][j] == 'S')
                    sx = i, sy = j;
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
    if(x < 1 || x > n || y < 1 || y > m)
        return ;
    if(visited[x][y])
        return ;
    if(maze[x][y] == 'X')
        return ;
    visited[x][y] = 1;
    if(maze[x][y] == 'D' && used == T)
    {
        flag = 1;
        return ;
    }
    if(used > T)
        return ;
    fei(0, 3)
    {
        if(visited[x + dx[i]][y + dy[i]] == 0)
        {
            dfs(x + dx[i], y + dy[i], used + 1);
            visited[x + dx[i]][y + dy[i]] = 0;
        }
    }
}
*/
