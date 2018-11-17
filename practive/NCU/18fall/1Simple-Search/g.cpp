#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 8;
struct node{
    int x, y;
};

bool v[maxn][maxn];
bool maze[maxn][maxn];
stack<node> ans;
bool flag = 0;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void input();
void output(node x);
void dfs(int x, int y);

int main()
{
    freopen("in.txt", "r", stdin);
    input();
    dfs(1, 1);
    while(!ans.empty())
    {
        output(ans.top());
        ans.pop();
    }
    return 0;
}

void dfs(int x, int y)
{
    if(x < 1 || y < 1 || x > 5 || y > 5)
        return ;
    if(v[x][y])
        return ;
    v[x][y] = 1;
    if(x == 5 && y == 5)
    {
        flag = 1;
    }
    fei(0, 3)
    {
        dfs(x + dx[i], y + dy[i]);
        if(flag)
            break;
    }
    if(flag)
    {
        node n;
        n.x = x;
        n.y = y;
        ans.push(n);
    }
}

void input()
{
    fei(1, 5)
        fej(1, 5)
        {
            cin >> maze[i][j];
            if(maze[i][j] == 1)
                v[i][j] = 1;
            else
                v[i][j] = 0;
        }
}

void output(node a)
{
    printf("(%d, %d)\n", a.x - 1, a.y - 1);
}

/*
bool maze[maxn][maxn];
bool v[maxn][maxn];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
    int x, y;
};

stack<node> s;

void dfs();
void output(node a);

int main()
{
    freopen("in.txt", "r", stdin);
    dfs();
    stack<node> b;
    while(!s.empty())
    {
        b.push(s.top());
        s.pop();
    }
    while(!b.empty())
    {
        output(b.top());
        b.pop();
    }
    return 0;
}

void dfs()
{
    node f;
    f.x = 1;
    f.y = 1;
    s.push(f);

    while(!s.empty())
    {
        f = s.top();
        v[f.x][f.y] = 1;
        if(f.x == 5 && f.y == 5)
            return ;
        bool flag = 0;
        fei(0, 3)
        {
            node n;
            n.x = f.x + dx[i];
            n.y = f.y + dy[i];
            if(n.x < 1 || n.y < 1 || n.x > 5 || n.y > 5)
                continue;
            if(v[n.x][n.y])
                continue;
            s.push(n);
            flag = 1;
        }
        if(flag)
            s.pop();
    }
}
int main()
{
    freopen("in.txt", "r", stdin);
    fei(1, 5)
        fej(1, 5)
        {
            cin >> maze[i][j];
            if(maze[i][j] == 1)
                v[i][j] = 0;
            else if(maze[i][j] == 0);
                v[i][j] = 1;
        }
    dfs();
    stack<node> b;
    while(!s.empty())
    {
        b.push(s.top());
        s.pop();
    }
    while(!b.empty())
    {
        output(b.top());
        b.pop();
    }
    return 0;
}

void dfs()
{
    node f;
    f.x = 1;
    f.y = 1;
    s.push(f);

    while(!s.empty())
    {
        f = s.top();
        v[f.x][f.y] = 0;
        if(f.x == f.y && f.x == 5)
            return ;
        fei(0, 3)
        {
            node n;
            n.x = f.x + dx[i];
            n.y = f.y + dy[i];
            if(v[n.x][n.y] && !maze[n.x][n.y])
                s.push(n);
        }
        s.pop();
    }
}

*/
