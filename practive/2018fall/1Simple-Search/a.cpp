#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 10;

char c[maxn][maxn];
int n, k, ans;
bool vx[maxn];
bool vy[maxn];

bool input();

void dfs(int i, int time);

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        dfs(1, 0);
        cout << ans << endl;
    }
    return 0;
}

void dfs(int i, int time)
{
    if(time == k)
    {
        ans++;
        return ;
    }
    if(i > n || n - i + time + 1 < k)
        return ;
    fej(1, n)
    {
        if(vy[j] == 0 && c[i][j] == '#')
        {
            // cout << i << j << endl;
            vy[j] = 1;
            dfs(i + 1, time + 1);
            vy[j] = 0;
        }
    }
    dfs(i + 1, time);
}
bool input()
{
    cin >> n >> k;
    if(n + k < 0)
        return false;
    fei(1, n)
    {   vx[i] = vy[i] = 0;
        fej(1, n)
            cin >> c[i][j];
    }
    ans = 0;
    return true;
}
