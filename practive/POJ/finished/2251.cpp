#include <iostream>
#include <queue>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 40;

struct node{
    int x, y, z, level;
};

char dung[maxn][maxn][maxn];
bool v[maxn][maxn][maxn];
int d[][3] = {
    1, 0, 0, 
    -1, 0, 0, 
    0, 1, 0,
    0, -1, 0,
    0, 0, 1,
    0, 0, -1,
};
int l, r, c, sl, sr, sc, ans;
bool flag;

bool bfs();
bool input();
int min(int a, int b);
bool judge(int x, int y, int z);

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        if(bfs())
            printf("Escaped in %d minute(s).\n", ans);
        else
            printf("Trapped!\n");
    }
    return 0;
}

bool judge(int x, int y, int z)
{
    return (x >= 1 && y >= 1 && z >= 1 && x <= l && y <= r && z <= c);
}

int min(int a, int b)
{
    return a > b? b : a;
}

bool bfs()
{
    queue<node> q;
    node s;
    s.x = sl;
    s.y = sr;
    s.z = sc;
    s.level = 0;
    q.push(s);

    while(!q.empty())
    {
        s = q.front();
        q.pop();
        
        if(dung[s.x][s.y][s.z] == 'E')
        {
            ans = s.level;
            return true;
        }
        v[s.x][s.y][s.z] = 1;
        node tmp;
        fei(0, 5)
        {
            tmp.x = s.x + d[i][0];
            tmp.y = s.y + d[i][1];
            tmp.z = s.z + d[i][2];
            // tmp.level = min(s.level + 1, v[tmp.x][tmp.y][tmp.z]);
            tmp.level = s.level + 1;
            /*
            if(tmp.x < 1 || tmp.y < 1 || tmp.z < 1 || tmp.x > l || tmp.y > r || tmp.z > c)
                continue;
            if(dung[tmp.x][tmp.y][tmp.z] == '#')
                continue;
            if(v[tmp.x][tmp.y][tmp.z])
                continue;
            v[tmp.x][tmp.y][tmp.z] = 1;
            q.push(tmp);
            */
            if(judge(tmp.x, tmp.y, tmp.z) && !v[tmp.x][tmp.y][tmp.z] && dung[tmp.x][tmp.y][tmp.z] !='#')
            {
                v[tmp.x][tmp.y][tmp.z] = 1;
                q.push(tmp);
            }
        }
    }
    return false;
}

bool input()
{
    cin >> l >> r >> c;
    if(l + r + c == 0)
        return false;
    ans = flag = 0;
    fei(1, l)
        fej(1, r)
            fek(1, c)
            {
                cin >> dung[i][j][k];
                v[i][j][k] = 0;
                if(dung[i][j][k] == 'S')
                {
                    sl = i;
                    sr = j;
                    sc = k;
                    // cout << sl << sr << sc << endl;
                }
            }
    return true;
}

/*
#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 40;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int dz[] = {1, -1, 0};

int d[][3] = {
    1, 0, 0, 
    -1, 0, 0, 
    0, 1, 0,
    0, -1, 0,
    0, 0, 1,
    0, 0, -1,
};
int l, r, c, sl, sr, sc, ans;
bool flag = 0;
char dung[maxn][maxn][maxn];
bool v[maxn][maxn][maxn];

bool input();
void dfs(int z, int y, int x, int time);

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        dfs(sl, sr, sc, 0);
        if(flag)
            printf("Escaped in %d minute(s).\n", ans);
        else
            printf("Trapped!\n");
    }
    return 0;
}
void dfs(int z, int y, int x, int time)
{
    if(x < 1 || y < 1 || z < 1 || x > c || y > r || z > l)
        return ;
    if(dung[z][y][x] == '#')
        return ;
    if(v[z][y][x])
        return ;
    v[z][y][x] = 1;
    if(dung[z][y][x] == 'E')
    {
        ans = time;
        flag = 1;
        return ;
    }
    fei(0, 5)
        {
            dfs(z + d[i][0], y + d[i][1], y + d[i][2], time + 1);
            if(flag)
                return ;
        }
}

bool input()
{
    cin >> l >> r >> c;
    if(l + r + c == 0)
        return false;
    ans = flag = 0;
    fei(1, l)
        fej(1, r)
            fek(1, c)
            {
                cin >> dung[i][j][k];
                v[i][j][k] = 0;
                if(dung[i][j][k] == 'S')
                {
                    sl = i;
                    sr = j;
                    sc = k;
                    // cout << sl << sr << sc << endl;
                }
            }
    return true;
}
*/
