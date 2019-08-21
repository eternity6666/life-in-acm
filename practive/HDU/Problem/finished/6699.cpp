#include <iostream>
#include <cstdio>
#include <queue>
#include <utility>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 2010;
typedef pair<int, int> P;

int n, m, q;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
bool v[maxn][maxn];

bool check(int x, int y)
{
    bool f1, f2;
    f1 = f2 = 0;
    if (x > 1)
        f1 = f1 || !v[x - 1][y];
    if (x < n)
        f1 = f1 || !v[x + 1][y];
    if (y > 1)
        f2 = f2 || !v[x][y - 1];
    if (y < m)
        f2 = f2 || !v[x][y + 1];
    // if(v[x][y]&&f1&&f2)
    //     cout << x << "," << y << "," << f1 << "," << f2 << endl;
    return f1 && f2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(v, 1, sizeof(v));
        scanf("%d%d%d", &n, &m, &q);
        while (q--)
        {
            int x, y;
            scanf("%d%d", &x, &y);
            int ans = 0;
            if (v[x][y])
            {
                queue<P> qq;
                qq.push(P(x, y));
                v[x][y] = 0;
                while (!qq.empty())
                {
                    P tmp = qq.front();
                    qq.pop();
                    x = tmp.first, y = tmp.second;
                    ans++;
                    for (int i = 0; i < 4; i++)
                        if (1 <= x + dx[i] && x + dx[i] <= n)
                            if (1 <= y + dy[i] && y + dy[i] <= m)
                                if (v[x + dx[i]][y + dy[i]])
                                    if (check(x + dx[i], y + dy[i]))
                                    {
                                        qq.push(P(x + dx[i], y + dy[i]));
                                        v[x+dx[i]][y+dy[i]]=0;
                                    }
                }
            }
            printf("%d\n", ans);
        }
    }
    return 0;
}
