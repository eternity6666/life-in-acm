#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
const int maxn = 1000 + 5;
int n, m, k;
int v[maxn];
vector<int> ve[maxn];

void init()
{
    for (int i = 1; i <= n; ++i)
        v[i] = i;
}

int findv(int x)
{
    return v[x] == x ? x : v[x] = findv(v[x]);
}

void merge(int x, int y)
{
    x = findv(x);
    y = findv(y);
    if (x < y)
        v[y] = x;
    else
        v[x] = y;
}

int bcj(int x)
{
    int ans = 0;
    init();
    for (int i = 1; i <= n; ++i)
    {
        vector<int>::iterator vit;
        if (i != x)
            for (vit = ve[i].begin(); vit != ve[i].end(); ++vit)
            {
                if (*vit != x)
                    merge(i, *vit);
            }
    }
    for (int i = 1; i <= n; ++i)
        if (i != x && v[i] == i)
            ans++;
    return ans - 1;
}
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        scanf("%d%d",&u,&v);
        ve[u].push_back(v);
        ve[v].push_back(u);
    }
    while (k--)
    {
        int x;
        scanf("%d",&x);
        cout << bcj(x) << endl;
    }
    return 0;
}