#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
char c[maxn][maxn];

int n, m, ans;
bool flag = 0;

void init(int n, int m);
void dfs(int x, int y, int t, int o ,int p);

int main()
{
    freopen("in.txt", "r", stdin);
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
        dfs(x, y, 0, 0, 0);
        // f[x][y] = 0;
        if(flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

void dfs(int x,int y, int t, int o, int p)
{
    if(x > n || x < 1 || y > m || y < 1)
        return ;
    if(c[x][y] == '#' && o == 0)
        return ;
    if(c[x][y] == 'T')
    {
        flag =  1;
        if(ans > t)
        {
            ans = t;
        }
        return ;
    }
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
        if(otmp + O
    }
}
