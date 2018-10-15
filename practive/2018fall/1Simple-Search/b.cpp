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
