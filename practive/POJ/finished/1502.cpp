#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int maxn = 105;
const int inf = 0x3f3f3f3f;

int n;
int maze[maxn][maxn];

void init();
int dijkstra()
{
    bool v[maxn];
    int dis[maxn];
    for(int i = 1; i <= n; i++)
        dis[i] = maze[1][i], v[i] = 0;

    v[1] = 1;
    for(int i = 0; i < n; i++)
    {
        int k = -1;
        int mn = inf;
        for(int j = 1; j <= n; j++)
            if(!v[j] && dis[j] < mn)
                mn = dis[j], k = j;
        if(k == -1)break;
        v[k] = 1;
        for(int j = 1; j <= n; j++)
            if(!v[j] && maze[k][j] != inf && dis[j] > dis[k] + maze[k][j])
                dis[j] = dis[k] + maze[k][j];
    }
    int ans = -1;
    for(int i = 1; i <= n; i++)
        if(ans < dis[i])
            ans = dis[i];
        // cout << dis[i] << (i == n ? "\n":" ");
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    init();
    cout << dijkstra() << endl;
    return 0;
}

int getInt(string s)
{
    int ans = 0;
    int len = s.length();
    for(int i = 0; i < len; i++)
        ans = ans * 10 + (int)(s[i] - '0');
    return ans;
}

void init()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            maze[i][j] = (i == j ? 0 : inf);
    for(int i = 2; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            string s;
            cin >> s;
            if(s == "x")
                maze[i][j] = inf;
            else
                maze[j][i] = maze[i][j] = getInt(s);
        }
    }
}
