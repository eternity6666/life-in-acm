#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 10 + 5;

int n, m, t;
char g[maxn][maxn];
bool flag[maxn][maxn];
bool ans;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int xs, ys, xd, yd;

void dfs(int x, int y, int used);

int main()
{
    freopen("in.txt", "r", stdin);
    while(cin >> n >> m >> t)
    {
        if(n + m + t == 0)
            break;
        ans = 0;
        fei(1, n)
            fej(1, m)
            {
                cin >> g[i][j];
                flag[i][j] = 0;
                if(g[i][j] == 'S')
                {
                    xs = i;
                    ys = j;
                }
                if(g[i][j] == 'D')
                {
                    xd = i;
                    yd = j;
                }
            }

        dfs(xs, ys, 0);

        if(ans)
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
    // cout << x << " " << y << " " << 1 << endl;
    if(g[x][y] == 'X')
        return ;
    int tmp = t - used - abs(xd - x) - abs(yd - y);
    if(tmp < 0 || tmp & 1)
        return ;
    // cout << x << " " << y << " " << 1 << endl;
    if(flag[x][y])
        return ;
    // cout << x << " " << y << " " << 1 << endl;
    if(used > t)
        return ;
    // cout << x << " " << y << " " << 1 << endl;
    if(g[x][y] == 'D')
    {
        if(used == t)
            ans = 1;
        return ;
    }

    fei(0, 3)
    {
        flag[x][y] = 1;
        dfs(x + dx[i], y + dy[i], used + 1);
        if(ans)
            return ;
        flag[x][y] = 0;
    }
}

