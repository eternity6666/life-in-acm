#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

const int maxn = 100 + 5;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, 1, 0, -1};

/*
int d[8][2]=
{
    {1,0},
    {1,1},
    {1,-1},
    {0,-1},
    {0,1},
    {-1,0},
    {-1,1},
    {-1,-1}
};
*/

char c[maxn][maxn];
int m, n,ans;

bool input();

void dfs(int i, int j);

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        for(int i = 1; i <= m; i ++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(c[i][j] == '@')
                {
                    dfs(i, j);
                    // cout << i<<j << endl;
                    ans ++;
                }
            }
        }
        cout << ans << endl;
    }
}

void dfs(int i, int j)
{
    c[i][j] = '*';
    for(int k = 0; k < 8; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if(x >= 1 && x <= m && y >= 1 && y <= n && c[x][y] == '@')
            dfs(x, y);
    }
    return ;
}

bool input()
{
    cin >> m >> n;
    if(m == 0 && n == 0)
        return false;
    getchar();
    ans = 0;
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
           // cout << c[i][j];
        }
        // cout << endl;
    }
    return true;
}

/*
#include <iostream>
#include <string>
// #include <queue>
using namespace std;
const int maxn = 100 + 5;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, 1, 0, -1};

struct node{
    int x, y;
};

int m, n, ans;
// queue<node> q;
char c[maxn][maxn];

bool input();

void dfs(int x, int y);

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(c[i][j] == '@')
                {
                    dfs(i, j);
                    ans++;
                }
            }
        }
        while(!q.empty())
        {
            node f = q.front();
            q.pop();
            
            if(c[f.x][f.y] == '@')
            {
                ans++;
                dfs(f.x, f.y);
            }
        }
        
        cout << q.empty() << endl;
        cout << ans << endl;
    }
    return 0;
}

void dfs(int x, int y)
{
    c[x][y] = '*';

    for(int i = 0; i < 8; i++)
    {
        int a = x + dx[i];
        int b = y + dy[i];
        if(c[a][b] == '@' && a >= 1 && a <= m && b >= 1 && b <= n)
        {
            dfs(a, b);
        }
    }
    return ;

}

bool input()
{
    cin >> m >> n;
    if(m == 0 && n == 0)
        return false;
    getchar();
    ans = 0;

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            
            if(c[i][j] == '@')
            {
                node tmp;
                tmp.x = i;
                tmp.y = j;
            //    q.push(tmp);
            }
            
        }
    }
    return true;
}

#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 100 + 5;

struct node{
    int x, y, f;
}grid[maxn * maxn];

int m, n, ans;
char c[maxn][maxn];

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, 1, 0, -1};

int got_ans();
bool input();
void merge(int a, int b);
int findx(int x);
bool judge(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        ans = got_ans();
        cout << ans << endl;
    }
    return 0;
}

bool input()
{
    cin >> m >> n;
    if(n + m == 0)
        return false;

    ans = 0;
    fni(0, m)
        fnj(0, n)
        {
            cin >> c[i][j];
            int tmp = i * m + j;
            grid[tmp].x = i;
            grid[tmp].y = j;
            grid[tmp].f = tmp;
        }
    return true;
}

int got_ans()
{
    fni(0, n * m)
    {
        node g = grid[i];
        if(c[g.x][g.y] == '@')
            fej(0, 7)
            {
                int nx = g.x + dx[j];
                int ny = g.y + dy[j];
                if(judge(nx, ny) && c[grid[nx].x][grid[ny].y] == '@')
                    merge(i, nx * m + ny);
            }
    }
    int t = 0;
    fni(0, n * m)
        if(grid[i].f == i && c[grid[i].x][grid[i].y] == '@')
            t++;
    return t;
}

int findx(int x)
{
    return x == grid[x].f ? x : grid[x].f = findx(grid[x].f);
}

bool judge(int a, int b)
{
    return (a >= 0 && a < m && b >= 0 && b < n);
}

void merge(int a, int b)
{
    a = findx(a);
    b = findx(b);

    if(grid[a].f > grid[b].f)
        grid[a].f = grid[b].f;
    else
        grid[b].f = grid[a].f;
}
*/
