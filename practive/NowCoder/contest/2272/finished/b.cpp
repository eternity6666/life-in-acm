#include <bits/stdc++.h>
using namespace std;
const int maxn = 3005;
const int mod = 2333;

template <class T>
inline void read(T &res)
{
    char c;
    T flag = 1;
    while ((c = getchar()) < '0' || c > '9')
        if (c == '-')
            flag = -1;
    res = c - '0';
    while ((c = getchar()) >= '0' && c <= '9')
        res = res * 10 + c - '0';
    res *= flag;
}

int g[maxn][maxn], n, m, ans[maxn][maxn];
bool v[maxn][maxn];
int dx[] = {0, 1};
int dy[] = {1, 0};
int dfs(int y, int x)
{
    if (y < 1 || x > n)
        return 0;
    if (v[y][x])
        return ans[y][x];
    v[y][x] = 1;
    if (g[y][x] == 1)
        return ans[y][x] = 0;
    return ans[y][x] = (dfs(y - 1, x) + dfs(y, x + 1)) % mod;
}

int main()
{
    read(m);
    read(n);
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
        {
            read(g[i][j]);
            ans[i][j] = 0;
            v[i][j] = 0;
        }
    v[1][n] = 1;
    ans[1][n] = 1;
    dfs(m, 1);
    cout << ans[m][1] << endl;
    return 0;
}