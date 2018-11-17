#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

char c[maxn][maxn];
bool f[maxn][maxn];

int n, m, ans;
bool flag = 0;

void init(int n, int m);
void dfs(int x, int y, int t, int o, int p);

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    while(~scanf("%d %d", &n, &m))
    {
        if(n == 0 && m == 0)
            break;
        init(n, m);
        int x, y;
        fei(1, n)
        {
            fej(1, m)
            {
                scanf("%c", &c[i][j]);
                if(c[i][j] == 'S')
                {
                    x = i;
                    y = j;
                }
            }
        }
        cout << x << y << endl;
        dfs(x, y, 1, 0, 0);
        f[x][y] = 0;
        if(flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
}

void init(int n, int m)
{
    flag = 0;
    ans = maxn * maxn * maxn;
    fei(1, n)
        fej(1, m)
            f[i][j] = 1;
}

void dfs(int x, int y, int t, int o, int p)
{
    if(x > n || x < 1 || y > m || y < 1)
        return ;
    if(f[x][y] == 0)
        return ;
    else
    {
        f[x][y] = 0;
    }
    if(c[x][y] == '#' && o == 0)
        return ;
    if(c[x][y] == 'T')
    {
        flag = 1;
        if(ans > t)
        {
            ans = t;
        }
        return ;
    }
    //cout << 1 << endl;
    int ttmp, otmp, ptmp;
    otmp = ptmp = 0;
    ttmp = 1;
    if(c[x][y] == '#')
    {
        ttmp++;
        otmp--;
    }
    if(p > 0)
    {
        ttmp--;
        ptmp--;
    }
    if(c[x][y] == 'B')
    {
        otmp = otmp + 5;
        if(otmp + o > 5)
        {
            otmp = 5 - o;
        }
    }
    if(c[x][y] == 'P')
    {
        ptmp = ptmp + 1;
    }
    cout << "(" << x << "," << y << ")" << endl;
    for(int i = 1; i <= 4; i++)
    {
        dfs(x + dx[i], y + dy[i], t + ttmp, o + otmp, p + ptmp);
    }
}
