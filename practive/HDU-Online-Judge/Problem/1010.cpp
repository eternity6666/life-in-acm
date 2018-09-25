#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 10;

bool flag = 0;
char maze[maxn][maxn];
int n, m, T, sx, sy;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int x, int y, int used);

int main()
{
    freopen("in.txt", "r", stdin);
//    while(~scanf("%d %d %d", &n, &m, &T))
    while(cin >> n >> m >> T)
    {
        //getchar();
        if(n == 0 && m == 0 && T == 0)
            break;
        flag = 0;
        fei(1, n)
        {
            fej(1, m)
            {
                scanf("%c", &maze[i][j]);
                // cout << maze[i][j];
                if(maze[i][j] == 'S')
                    sx = i, sy = j;
            }
        //    cout << endl;
        }
        // fei(1, n)
        //    fej(1, m)
        //       cout << maze[i][j];
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
    if(maze[x][y] == 'X')
        return ;
    if(maze[x][y] == 'D' && used == T)
    {
        flag = 1;
        return ;
    }
    if(used > T)
        return ;
    fei(0, 3)
        dfs(x + dx[i], y + dy[i], used + 1);
}

