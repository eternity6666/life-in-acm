#include <iostream>
using namespace std;
const int maxn = 1010;
const int inf = 0x3f3f3f3f;
typedef long long ll;

int v, e, s, k, c;
int g[maxn][maxn];
ll dk[maxn], ds[maxn];
bool vk[maxn], vs[maxn];

ll sdijkstra()
{
    for (int i = 1; i <= v; i++)
    {
        int k = -1, mi = inf;
        for (int j = 1; j <= v; j++)
            if (vs[j] == 0 && ds[j] < mi)
                k = j, mi = ds[j];
        if (k == -1)
            break;
        vs[k] = 1;
        for (int j = 1; j <= v; j++)
            if (vs[j] == 0 && g[k][j] != inf && ds[j] > ds[k] + g[k][j])
                ds[j] = ds[k] + g[k][j];
    }
    ll ma = -inf;
    for (int i = 1; i <= v; ++i)
        if (vs[i] && ds[i] > ma)
            ma = ds[i];
    return ma;
}

ll kdijkstra()
{
    for (int i = 1; i <= v; i++)
    {
        int k = -1, mi = inf;
        for (int j = 1; j <= v; j++)
            if (vk[j] == 0 && dk[j] < mi)
                k = j, mi = dk[j];
        if (k == -1)
            break;
        vk[k] = 1;
        for (int j = 1; j <= v; j++)
            if (vk[j] == 0 && g[k][j] != inf && dk[j] > dk[k] + g[k][j])
                dk[j] = dk[k] + g[k][j];
    }
    ll ma = -inf;
    for (int i = 1; i <= v; ++i)
        if (vk[i] && dk[i] > ma)
            ma = dk[i];
    return ma;
}

void init()
{
    cin >> v >> e >> s >> k >> c;
    for (int i = 1; i <= v; i++)
    {
        dk[i] = ds[i] = inf;
        vk[i] = vs[i] = 0;
        for (int j = 1; j <= v; j++)
            g[i][j] = (i==j?0:inf);
    }
    for (int i = 1; i <= k; i++)
    {
        int tmp;
        cin >> tmp;
        dk[tmp] = 0;
    }
    ds[s] = 0;
    for (int i = 1; i <= e; ++i)
    {
        int x, y, l;
        cin >> x >> y >> l;
        g[x][y] = g[y][x] = min(g[x][y], l);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        ll ss = sdijkstra();
        ll kk = kdijkstra();
        if (ss <= kk * 10)
            cout << ss << endl;
        else
            cout << kk << endl;
    }
    return 0;
}
